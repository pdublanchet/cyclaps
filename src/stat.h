      real       t0, t1, t2, t3, t4, t5
      save       t0, t1, t2, t3, t4, t5

      integer    nopx, nbx, nrorth, nitref, nrstrt
      real       tsaupd, tsaup2, tsaitr, tseigt, tsgets, tsapps, tsconv, &
                 tnaupd, tnaup2, tnaitr, tneigh, tngets, tnapps, tnconv, &
                 tcaupd, tcaup2, tcaitr, tceigh, tcgets, tcapps, tcconv, &
                 tmvopx, tmvbx, tgetv0, titref, trvec
      common /timing/ &
                 nopx, nbx, nrorth, nitref, nrstrt, &
                 tsaupd, tsaup2, tsaitr, tseigt, tsgets, tsapps, tsconv, &
                 tnaupd, tnaup2, tnaitr, tneigh, tngets, tnapps, tnconv, &
                 tcaupd, tcaup2, tcaitr, tceigh, tcgets, tcapps, tcconv, &
                 tmvopx, tmvbx, tgetv0, titref, trvec
