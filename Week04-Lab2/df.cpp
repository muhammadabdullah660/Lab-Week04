void sorting(float agg1 float agg2, float agg3, float agg4)
{
    if (aggregate > aggregate2 && aggregate > aggregate3 && aggregate > aggregate4)
    {
        cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
        if (aggregate2 > aggregate3 && aggregate2 > aggregate4)
        {
            cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            if (aggregate3 > aggregate4)
            {
                cout << name3 << "\t" << matric_marks3 << "\t" << ecat_marks3 << fsc_marks3 << "\t"
                     << "\t" << aggregate3 << "\n";
                cout << name4 << "\t" << matric_marks4 << "\t" << ecat_marks4 << "\t" << fsc_marks4 << "\t" << aggregate4 << "\n";
            }

            if (aggregate4 > aggregate3)
            {
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            }
        }
        else if (aggregate3 > aggregate2 && aggregate3 > aggregate4)
        {
            cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            if (aggregate2 > aggregate4)
            {
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
            }

            if (aggregate4 > aggregate2)
            {
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            }
        }
        if (aggregate4 > aggregate2 && aggregate4 > aggregate3)
        {
            cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
            if (aggregate2 > aggregate3)
            {
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            }

            if (aggregate3 > aggregate2)
            {
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            }
        }
    }
    // 2nd
    if (aggregate2 > aggregate && aggregate2 > aggregate3 && aggregate2 > aggregate4)
    {
        cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
        if (aggregate > aggregate3 && aggregate > aggregate4)
        {
            cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            if (aggregate3 > aggregate4)
            {
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
            }

            if (aggregate4 > aggregate3)
            {
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            }
        }
        if (aggregate3 > aggregate && aggregate3 > aggregate4)
        {
            cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            if (aggregate > aggregate4)
            {
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
            }

            if (aggregate4 > aggregate)
            {
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            }
        }
        if (aggregate4 > aggregate && aggregate4 > aggregate3)
        {
            cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
            if (aggregate > aggregate3)
            {
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            }

            if (aggregate3 > aggregate)
            {
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            }
        }
    }
    // 3
    if (aggregate3 > aggregate && aggregate3 > aggregate2 && aggregate3 > aggregate4)
    {
        cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
        if (aggregate > aggregate2 && aggregate > aggregate4)
        {
            cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            if (aggregate2 > aggregate4)
            {
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
            }

            if (aggregate4 > aggregate2)
            {
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            }
        }
        if (aggregate2 > aggregate && aggregate2 > aggregate4)
        {
            cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            if (aggregate > aggregate4)
            {
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
            }

            if (aggregate4 > aggregate)
            {
                cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            }
        }
        if (aggregate4 > aggregate && aggregate4 > aggregate2)
        {
            cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
            if (aggregate > aggregate2)
            {
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            }

            if (aggregate2 > aggregate)
            {
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            }
        }
    }
    // 4
    if (aggregate4 > aggregate && aggregate4 > aggregate3 && aggregate4 > aggregate2)
    {
        cout << name4 << "\t" << matric_marks4 << "\t" << fsc_marks4 << "\t" << ecat_marks4 << "\t" << aggregate4 << "\n";
        if (aggregate > aggregate3 && aggregate > aggregate2)
        {
            cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            if (aggregate3 > aggregate2)
            {
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            }

            if (aggregate2 > aggregate3)
            {
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            }
        }
        if (aggregate2 > aggregate && aggregate2 > aggregate3)
        {
            cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            if (aggregate > aggregate3)
            {
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            }

            if (aggregate3 > aggregate)
            {
                cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            }
        }
        if (aggregate3 > aggregate && aggregate3 > aggregate2)
        {
            cout << name3 << "\t" << matric_marks3 << "\t" << fsc_marks3 << "\t" << ecat_marks3 << "\t" << aggregate3 << "\n";
            if (aggregate > aggregate2)
            {
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
            }

            if (aggregate2 > aggregate)
            {
                cout << name2 << "\t" << matric_marks2 << "\t" << fsc_marks2 << "\t" << ecat_marks2 << "\t" << aggregate2 << "\n";
                cout << name << "\t" << matric_marks << "\t" << fsc_marks << "\t" << ecat_marks << "\t" << aggregate << "\n";
            }
        }
    }
}