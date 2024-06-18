@class NSString;

@interface TRIContentTrackingId : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *str;

+ (id)contentIdWithStr:(id)a0;

- (id)init;
- (id)copyWithReplacementStr:(id)a0;
- (id)initWithStr:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToContentId:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
