/*
This file is part of Telegram Desktop,
an unofficial desktop messaging app, see https://telegram.org

Telegram Desktop is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

It is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

Full license: https://github.com/telegramdesktop/tdesktop/blob/master/LICENSE
Copyright (c) 2014 John Preston, https://tdesktop.com
*/
#pragma once

void filedialogInit();
bool filedialogGetOpenFiles(QStringList &files, QByteArray &remoteContent, const QString &caption, const QString &filter);
bool filedialogGetOpenFile(QString &file, QByteArray &remoteContent, const QString &caption, const QString &filter);
bool filedialogGetSaveFile(QString &file, const QString &caption, const QString &filter, const QString &startName);
bool filedialogGetDir(QString &dir, const QString &caption);

QString filedialogDefaultName(const QString &prefix, const QString &extension, const QString &path = QString(), bool skipExistance = false);