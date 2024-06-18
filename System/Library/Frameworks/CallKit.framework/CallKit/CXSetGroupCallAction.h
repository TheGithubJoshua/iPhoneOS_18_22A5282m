@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction

@property (copy, nonatomic) NSUUID *callUUIDToGroupWith;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)customDescription;
- (id)initWithCallUUID:(id)a0 callUUIDToGroupWith:(id)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
