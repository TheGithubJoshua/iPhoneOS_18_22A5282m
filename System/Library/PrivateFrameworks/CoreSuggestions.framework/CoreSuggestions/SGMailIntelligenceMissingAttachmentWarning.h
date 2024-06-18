@interface SGMailIntelligenceMissingAttachmentWarning : SGMailIntelligenceComposeWarning

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned char)warningType;

@end
