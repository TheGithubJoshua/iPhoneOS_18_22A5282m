@interface SiriHearstLongPressButtonContext : SiriLongPressButtonContext {
    BOOL _isTemporaryDevice;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (BOOL)isTemporaryDevice;
- (id)initWithSpeechRequestOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;

@end
