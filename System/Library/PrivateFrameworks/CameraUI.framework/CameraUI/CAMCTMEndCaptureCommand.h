@class NSString;

@interface CAMCTMEndCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) NSString *_persistenceUUID;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithPersistenceUUID:(id)a0;

@end
