@class CKContainerID, CKDApplicationID, NSString;

@interface CKDAppContainerTuple : NSObject <NSCopying>

@property (readonly, nonatomic) CKDApplicationID *applicationID;
@property (readonly, nonatomic) CKContainerID *containerID;
@property (copy, nonatomic) NSString *personaID;

- (unsigned long long)hash;
- (id)CKPropertiesDescription;
- (id)initWithApplicationID:(id)a0 containerID:(id)a1 personaID:(id)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
