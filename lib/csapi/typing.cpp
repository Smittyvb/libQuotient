/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#include "typing.h"

#include "converters.h"

#include <QtCore/QStringBuilder>

using namespace QMatrixClient;

static const auto basePath = QStringLiteral("/_matrix/client/r0");

SetTypingJob::SetTypingJob(const QString& userId, const QString& roomId, bool typing, int timeout)
    : BaseJob(HttpVerb::Put, "SetTypingJob",
        basePath % "/rooms/" % roomId % "/typing/" % userId)
{
    QJsonObject _data;
    addToJson<>(_data, "typing", typing);
    addToJson<IfNotEmpty>(_data, "timeout", timeout);
    setRequestData(_data);
}
