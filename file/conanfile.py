from conans import ConanFile

class ValuePtrLiteConan(ConanFile):
    version = "0.0.0"
    name = "XXX-lite"
    description = "XXX"
    license = "Boost Software License - Version 1.0. http://www.boost.org/LICENSE_1_0.txt"
    url = "https://github.com/martinmoene/XXX"
    exports_sources = "include/nonstd/*", "LICENSE.txt"
    build_policy = "missing"    
    author = "Martin Moene"

    def package_info(self):
        self.info.header_only()
