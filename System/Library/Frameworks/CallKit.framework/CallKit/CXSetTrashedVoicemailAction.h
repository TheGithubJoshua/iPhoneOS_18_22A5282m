@interface CXSetTrashedVoicemailAction : CXVoicemailAction

@property (nonatomic, getter=isTrashed) BOOL trashed;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)customDescription;
- (id)initWithVoicemailUUID:(id)a0 trashed:(BOOL)a1;
- (void)updateSanitizedCopy:(id)a0 withZone:(struct _NSZone { } *)a1;

@end
