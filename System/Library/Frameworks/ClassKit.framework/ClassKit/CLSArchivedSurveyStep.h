@interface CLSArchivedSurveyStep : CLSAbstractSurveyStep {
    long long _version;
    long long _type;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)setType:(long long)a0;
- (void)setVersion:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)type;
- (long long)version;

@end
