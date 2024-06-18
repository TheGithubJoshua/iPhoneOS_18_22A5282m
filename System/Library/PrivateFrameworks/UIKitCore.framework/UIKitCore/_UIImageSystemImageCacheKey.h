@class NSString, UIColor;

@interface _UIImageSystemImageCacheKey : NSObject <NSCopying> {
    NSString *_identifier;
    UIColor *_tintColor;
}

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
