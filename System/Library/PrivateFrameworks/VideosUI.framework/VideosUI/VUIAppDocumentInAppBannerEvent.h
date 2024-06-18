@class NSString;

@interface VUIAppDocumentInAppBannerEvent : VUIAppDocumentUpdateEvent <NSCopying>

@property (copy, nonatomic) NSString *targetId;

- (id)initWithDescriptor:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTargetId:(id)a0;

@end
