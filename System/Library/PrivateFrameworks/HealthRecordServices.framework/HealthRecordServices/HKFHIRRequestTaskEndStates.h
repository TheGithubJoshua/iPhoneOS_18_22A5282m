@class NSArray, HKFHIRRequestTaskEndState, NSString;

@interface HKFHIRRequestTaskEndStates : NSObject <NSCopying, NSSecureCoding, NSFastEnumeration>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *objects;
@property (readonly, copy, nonatomic) HKFHIRRequestTaskEndState *firstObject;
@property (readonly, nonatomic) NSString *eventLoggingDescription;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithEndState:(id)a0;
- (id)initWithEndStates:(id)a0;

@end
