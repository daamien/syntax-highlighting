/*
    Copyright (C) 2016 Volker Krause <vkrause@kde.org>

    This program is free software; you can redistribute it and/or modify it
    under the terms of the GNU Library General Public License as published by
    the Free Software Foundation; either version 2 of the License, or (at your
    option) any later version.

    This program is distributed in the hope that it will be useful, but WITHOUT
    ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
    FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Library General Public
    License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include <repository.h>

#include <QObject>
#include <qtest.h>

using namespace KSyntaxHighlighting;

class RepositoryBenchmark : public QObject
{
    Q_OBJECT
private Q_SLOTS:
    void benchmarkReporitoryLoad()
    {
        QBENCHMARK {
            Repository repo;
        }
    }

};

QTEST_GUILESS_MAIN(RepositoryBenchmark)

#include "repository_benchmark.moc"
