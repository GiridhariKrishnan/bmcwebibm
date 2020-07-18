#pragma once

#include <app.h>

namespace crow
{
namespace redfish
{
void requestRoutes(App& app)
{
    BMCWEB_ROUTE(app, "/redfish/")
        .methods(boost::beast::http::verb::get)(
            [](const crow::Request& req, crow::Response& res) {
                res.jsonValue = {{"v1", "/redfish/v1/"}};
                res.end();
            });
}
} // namespace redfish
} // namespace crow
