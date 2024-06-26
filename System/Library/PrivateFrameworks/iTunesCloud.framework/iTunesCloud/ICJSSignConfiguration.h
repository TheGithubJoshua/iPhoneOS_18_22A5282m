@class NSString, NSMutableArray;

@interface ICJSSignConfiguration : NSObject <NSCopying> {
    NSMutableArray *_componentNames;
    NSMutableArray *_components;
}

@property (copy, nonatomic) NSString *signatureDataCookieName;
@property (copy, nonatomic) NSString *signatureDataHeaderName;

+ (id)storePlatformConfiguration;

- (void)includeQueryItemWithName:(id)a0;
- (void)_addRequestComponent:(long long)a0 withName:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_enumerateComponentsUsingBlock:(id /* block */)a0;
- (void)includeHeaderWithName:(id)a0;
- (void)includeCookieWithName:(id)a0;

@end
