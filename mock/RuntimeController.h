#include <gmock/gmock.h>

#include "../RuntimeControllerIf.h"

namespace Mock
{
class RuntimeController : public RuntimeControllerIf
{
   public:
    virtual ~RuntimeController()
    {
    }

    MOCK_METHOD( void, subscribe, ( std::string const& name, std::shared_ptr< RuntimeIf > const runtime ), ( override ) );
    MOCK_METHOD( std::shared_ptr< RuntimeIf >, get, ( std::string const& name ), ( const, override ) );
    MOCK_METHOD( ( std::map< std::string, std::shared_ptr< RuntimeIf > > ), getAll, (), ( const, override ) );

    MOCK_METHOD( std::string, getType, (), ( const, override ) );
    MOCK_METHOD( std::string, getName, (), ( const, override ) );
    MOCK_METHOD( std::string, getVersion, (), ( const, override ) );
};
}
