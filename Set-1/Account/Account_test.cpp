#include"Account.h"
#include <gtest/gtest.h>

namespace {
TEST(Account,DefaultConstructor) 
{
    Account a1;
    EXPECT_EQ(0.0,a1.getBalance());
    EXPECT_STREQ("",a1.m_accNumber);
    EXPECT_STREQ("",a1.m_accName);
}
TEST(Account,ParameterizedConstructor) 
{
    Account a1("1001","Vignesh",5000.0);
    EXPECT_EQ("1001",a1.m_accNumber);
    EXPECT_STREQ("Vignesh",a1.m_accName);
    EXPECT_EQ(7,a1.m_accName.length());
    EXPECT_EQ(5000.0,a1.getBalance());

}
TEST(Account,ParameterizedConstructor2) 
{
    Account a1("1001","Vignesh");
    EXPECT_EQ("1001",a1.m_accNumber);
    EXPECT_STREQ("Vignesh",a1.m_accName);
    EXPECT_EQ(7,a1.m_accName.length());
    EXPECT_EQ(0.0,a1.getBalance());

}
TEST(Account,CopyConstructor) 
{
    Account a1("1001","Vignesh",5000.0);
    Account a2(a1);
    EXPECT_EQ("1001",a2.m_accNumber);
    EXPECT_STREQ("Vignesh",a2.m_accName);
    EXPECT_EQ(7,a2.m_accName.length());
    EXPECT_EQ(5000.0,a2.getBalance());

}
TEST(Account,CreditTest) 
{
    Account a1("1001","Vignesh",5000.0);
    a1.credit(3000);
    EXPECT_EQ(8000.0,a1.getBalance());

}
TEST(Account,DebitTest) 
{
    Account a1("1001","Vignesh",5000.0);
    a1.debit(1200);
    EXPECT_EQ(3800.0,a1.getBalance());
}
TEST(Account,TransactionTest)
 {
    Account a1("1001","Vignesh",5000.0);
    a1.debit(1200);
    a1.credit(3400);
    a1.debit(2000);
    a1.credit(3000);
    EXPECT_EQ(8200.0,a1.getBalance()) << "Invalid Balance";
}
}

int main(int argc, char **argv)
{
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
