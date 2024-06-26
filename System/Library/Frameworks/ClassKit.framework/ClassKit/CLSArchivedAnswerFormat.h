@interface CLSArchivedAnswerFormat : CLSAbstractAnswerFormat {
    long long _answerFormatType;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (long long)answerFormatType;
- (void)setAnswerFormatType:(long long)a0;

@end
