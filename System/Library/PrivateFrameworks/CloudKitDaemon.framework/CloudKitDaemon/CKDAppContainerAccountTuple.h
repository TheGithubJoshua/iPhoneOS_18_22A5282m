@class NSString, CKDAppContainerTuple;

@interface CKDAppContainerAccountTuple : NSObject <NSCopying>

@property (retain, nonatomic) CKDAppContainerTuple *appContainerTuple;
@property (copy, nonatomic) NSString *accountID;

- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAppContainerTuple:(id)a0 accountID:(id)a1;

@end
