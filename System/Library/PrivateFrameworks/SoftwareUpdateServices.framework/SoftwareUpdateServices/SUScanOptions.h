@class NSString, NSMutableSet;

@interface SUScanOptions : SUOptionsBase <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableSet *types;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic, getter=isForced) BOOL forced;
@property (retain, nonatomic) NSString *requestedPMV;
@property (nonatomic) BOOL ignoreNoUpdateFoundResult;
@property (nonatomic) BOOL MDMUseDelayPeriod;
@property (nonatomic) BOOL MDMShowRapidSecurityResponse;
@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *clientName;

- (id)initWithCoder:(id)a0;
- (void)clearTypes;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addType:(int)a0;
- (BOOL)containsType:(int)a0;
- (BOOL)isSplatOnlyScan;
- (BOOL)findsAnyUpdate;
- (void)removeType:(int)a0;

@end
