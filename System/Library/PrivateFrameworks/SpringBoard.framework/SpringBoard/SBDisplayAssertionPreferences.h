@class NSString, SBDisplayPowerLogEntry, SBExternalDisplayArrangementItem;

@interface SBDisplayAssertionPreferences : NSObject <NSCopying>

@property (nonatomic) BOOL wantsControlOfDisplay;
@property (retain, nonatomic) SBExternalDisplayArrangementItem *displayArrangement;
@property (copy, nonatomic) NSString *disableSystemIdleSleepReason;
@property (copy, nonatomic) SBDisplayPowerLogEntry *powerLogEntry;
@property (nonatomic) unsigned long long cloneMirroringMode;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
