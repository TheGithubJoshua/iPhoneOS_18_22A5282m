@class CKShare, CKContainerSetupInfo, CKAllowedSharingOptions;

@interface CKSharingContext : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CKShare *share;
@property (retain, nonatomic) CKContainerSetupInfo *containerSetupInfo;
@property (retain, nonatomic) CKAllowedSharingOptions *allowedOptions;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithShare:(id)a0 containerSetupInfo:(id)a1 allowedOptions:(id)a2;

@end
