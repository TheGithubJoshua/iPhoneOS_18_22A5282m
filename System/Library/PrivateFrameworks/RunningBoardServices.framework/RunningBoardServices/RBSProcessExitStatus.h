@class NSString;

@interface RBSProcessExitStatus : NSObject <RBSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int domain;
@property (readonly, nonatomic) unsigned long long code;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)statusWithDomain:(unsigned int)a0 code:(unsigned long long)a1;
+ (BOOL)supportsRBSXPCSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)_dictionaryRepresentation;
- (void)encodeWithRBSXPCCoder:(id)a0;
- (id)initWithRBSXPCCoder:(id)a0;
- (BOOL)isJetsam;
- (BOOL)isValid;
- (BOOL)isSignal;
- (BOOL)isCrash;
- (BOOL)isFairPlayFailure;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)error;
- (BOOL)_isVoluntary;
- (id)_initWithDictionaryRepresentation:(id)a0;

@end
