from setuptools import find_packages
from setuptools import setup

setup(
    name='server_demo',
    version='0.0.0',
    packages=find_packages(
        include=('server_demo', 'server_demo.*')),
)
