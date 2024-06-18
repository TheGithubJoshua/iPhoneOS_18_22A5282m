@class NSString, BSProcessHandle, SBApplication;

@interface SBLockScreenUnlockRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int source;
@property (nonatomic) int intent;
@property (retain, nonatomic) BSProcessHandle *process;
@property (retain, nonatomic) SBApplication *destinationApplication;
@property (nonatomic) BOOL wantsBiometricPresentation;
@property (nonatomic) BOOL forceAlertAuthenticationUI;
@property (nonatomic) BOOL confirmedNotInPocket;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
