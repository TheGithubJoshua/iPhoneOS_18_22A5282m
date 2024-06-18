@class CXScreenShareAttributes;

@interface CXSetSharingScreenCallAction : CXCallAction

@property (nonatomic, getter=isSharingScreen) BOOL sharingScreen;
@property (retain, nonatomic) CXScreenShareAttributes *attributes;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)customDescription;
- (id)initWithCallUUID:(id)a0 sharingScreen:(BOOL)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
