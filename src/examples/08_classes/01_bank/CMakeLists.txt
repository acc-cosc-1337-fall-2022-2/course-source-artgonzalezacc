add_library(ex_08_01_library "bank_account.cpp" "bank_account.h"
                                "atm.cpp" "atm.h"
								"customer.cpp" "customer.h"
								"transaction.cpp" "transaction.h"
								"savings_account.cpp" "savings_account.h"
								"checking_account.cpp" "checking_account.h")
add_executable(ex_08_01_exe "main.cpp" "bank_account.cpp" "atm.cpp"
                               "customer.cpp" "transaction.cpp" "savings_account.cpp"
							   "checking_account.cpp")