@class NSString;

@interface TMTimeZone : NSObject

@property (copy) NSString *source;
@property (copy) NSString *olsonName;

+ (id)timeZoneWithOlsonName:(id)a0 fromSource:(id)a1;

- (id)initWithDictionary:(id)a0;
- (id)initWithOlsonName:(id)a0 fromSource:(id)a1;
- (id)description;
- (BOOL)hasSameOlsonNameAs:(id)a0;
- (void)dealloc;

@end
