@class NSSet;

@interface BMDSLGraphValidator : NSObject

@property (class, readonly) NSSet *genericValidKeyPaths;
@property (class, readonly) NSSet *legacyValidKeyPaths;

@property (readonly, nonatomic) BOOL passthrough;
@property (readonly, copy, nonatomic) NSSet *validKeyPaths;
@property (readonly, copy, nonatomic) NSSet *allowedOperations;
@property (readonly, copy, nonatomic) NSSet *allowedStreamTypes;

+ (void)setCurrentProcessValidator:(id)a0;
+ (id)passthroughValidator;
+ (id)currentProcessValidator;

- (id)init;
- (BOOL)isStreamTypeAllowed:(unsigned long long)a0;
- (id)initWithValidKeyPaths:(id)a0 allowedOperations:(id)a1 allowedStreamTypes:(id)a2;
- (void).cxx_destruct;
- (BOOL)isExecutionAllowedForGraph:(id)a0;

@end
