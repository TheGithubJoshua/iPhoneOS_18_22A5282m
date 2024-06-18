@class NSString, _PASLock;

@interface TRISubjectProvider : NSObject <NSSecureCoding> {
    NSString *_path;
    _PASLock *_lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)defaultProviderWithPaths:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)subject;
- (id)nextRotationDateAfter:(id)a0;
- (void)decodeWithCoder:(id)a0 guardedData:(id)a1;
- (id)subjectWithProjectId:(int)a0;
- (id)initWithPath:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)save;
- (void)rotateSubject;
- (unsigned long long)numberOfWeeksPerRotation;
- (BOOL)loadUsingGuardedData:(id)a0;
- (void)setNextRotationDate:(id)a0;
- (id)nextRotationDate;
- (id)anchorDate;
- (void)encodeWithCoder:(id)a0 guardedData:(id)a1;

@end
