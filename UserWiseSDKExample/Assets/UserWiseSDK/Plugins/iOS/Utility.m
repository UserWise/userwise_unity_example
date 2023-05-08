#import "./Utility.h"

@implementation UserWiseUtility
+ (NSString * _Nonnull)getLanguage {
    return [[NSLocale currentLocale] languageCode];
}

+ (NSString * _Nonnull)getCountry {
    return [[NSLocale currentLocale] countryCode];
}

+ (NSString * _Nonnull)getTimeZone {
    return [[NSTimeZone localTimeZone] name];
}
@end
