#  Copyright (C) 2009 by Cies Breijs
#  Copyright (C) 2009 by Niels Slot
#
#  This program is free software; you can redistribute it and/or
#  modify it under the terms of the GNU General Public
#  License as published by the Free Software Foundation; either
#  version 2 of the License, or (at your option) any later version.
#
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#
#  You should have received a copy of the GNU General Public
#  License along with this program; if not, write to the Free
#  Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
#  Boston, MA 02110-1301, USA.

require File.dirname(__FILE__) + '/spec_helper.rb'
$i = Interpreter.instance

describe "boolean operator" do
  it "should work as expected with basic operations (and, or, not)" do
    $i.should_run_clean <<-EOS
      assert true and true
      assert true or true
      assert not false
    EOS
  end

  it "should raise an error when insufficient values are provided" do
    $i.run("assert true and").errors?.should be_true
    $i.run("assert and true").errors?.should be_true
    $i.run("assert or").errors?.should be_true
    $i.run("assert not").errors?.should be_true
  end
end
