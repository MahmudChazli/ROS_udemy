from setuptools import find_packages
from setuptools import setup

setup(
    name='simple_interfaces_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('simple_interfaces_pkg', 'simple_interfaces_pkg.*')),
)
