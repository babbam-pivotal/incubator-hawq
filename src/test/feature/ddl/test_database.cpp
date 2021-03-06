/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "gtest/gtest.h"

#include "lib/sql_util.h"

using std::string;

class TestDatabase: public ::testing::Test
{
	public:
		TestDatabase() { }
		~TestDatabase() {}
};

TEST_F(TestDatabase, BasicTest)
{
	hawq::test::SQLUtility util(hawq::test::MODE_DATABASE);
	util.execSQLFile("ddl/sql/goh_database.sql",
	                 "ddl/ans/goh_database.ans",
                     "ddl/sql/init_file");
}
