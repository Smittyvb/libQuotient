/******************************************************************************
 * THIS FILE IS GENERATED - ANY EDITS WILL BE OVERWRITTEN
 */

#include "profile.h"

using namespace Quotient;

SetDisplayNameJob::SetDisplayNameJob(const QString& userId,
                                     const QString& displayname)
    : BaseJob(HttpVerb::Put, QStringLiteral("SetDisplayNameJob"),
              makePath("/_matrix/client/r0", "/profile/", userId, "/displayname"))
{
    QJsonObject _data;
    addParam<>(_data, QStringLiteral("displayname"), displayname);
    setRequestData(std::move(_data));
}

QUrl GetDisplayNameJob::makeRequestUrl(QUrl baseUrl, const QString& userId)
{
    return BaseJob::makeRequestUrl(std::move(baseUrl),
                                   makePath("/_matrix/client/r0", "/profile/",
                                            userId, "/displayname"));
}

GetDisplayNameJob::GetDisplayNameJob(const QString& userId)
    : BaseJob(HttpVerb::Get, QStringLiteral("GetDisplayNameJob"),
              makePath("/_matrix/client/r0", "/profile/", userId, "/displayname"),
              false)
{}

SetAvatarUrlJob::SetAvatarUrlJob(const QString& userId, const QUrl& avatarUrl)
    : BaseJob(HttpVerb::Put, QStringLiteral("SetAvatarUrlJob"),
              makePath("/_matrix/client/r0", "/profile/", userId, "/avatar_url"))
{
    QJsonObject _data;
    addParam<>(_data, QStringLiteral("avatar_url"), avatarUrl);
    setRequestData(std::move(_data));
}

QUrl GetAvatarUrlJob::makeRequestUrl(QUrl baseUrl, const QString& userId)
{
    return BaseJob::makeRequestUrl(std::move(baseUrl),
                                   makePath("/_matrix/client/r0", "/profile/",
                                            userId, "/avatar_url"));
}

GetAvatarUrlJob::GetAvatarUrlJob(const QString& userId)
    : BaseJob(HttpVerb::Get, QStringLiteral("GetAvatarUrlJob"),
              makePath("/_matrix/client/r0", "/profile/", userId, "/avatar_url"),
              false)
{}

QUrl GetUserProfileJob::makeRequestUrl(QUrl baseUrl, const QString& userId)
{
    return BaseJob::makeRequestUrl(std::move(baseUrl),
                                   makePath("/_matrix/client/r0", "/profile/",
                                            userId));
}

GetUserProfileJob::GetUserProfileJob(const QString& userId)
    : BaseJob(HttpVerb::Get, QStringLiteral("GetUserProfileJob"),
              makePath("/_matrix/client/r0", "/profile/", userId), false)
{}
