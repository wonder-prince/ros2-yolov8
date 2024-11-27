from setuptools import find_packages, setup

package_name = 'niluo_topic'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='interstellar',
    maintainer_email='20235459@stu.cqu.edu.cn',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'niluo=niluo_topic.niluo:main',
            'student=niluo_topic.student:main'
        ],
    },
)
