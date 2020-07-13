import unittest


class PythonTests(unittest.TestCase):
    def test_import(self):
        try:
            import cpp_python_workflow.pynumber_lib as lib
        except:
            self.fail("could not import 'number_lib'")

    def test_default_construction(self):
        import cpp_python_workflow.pynumber_lib as lib

        num = lib.number_int()
        self.assertEqual(num._value, 0)

    def test_construction(self):
        import cpp_python_workflow.pynumber_lib as lib

        num = lib.number_int(10)
        self.assertEqual(num._value, 10)

    def test_addition(self):
        import cpp_python_workflow.pynumber_lib as lib

        num = lib.number_int(10) + lib.number_int(20)
        self.assertEqual(num._value, 30)


if __name__ == "__main__":
    unittest.main()
