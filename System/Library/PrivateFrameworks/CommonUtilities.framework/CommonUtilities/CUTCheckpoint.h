@class NSString;

@interface CUTCheckpoint : NSObject <NSSecureCoding, NSCopying> {
    BOOL _frozen;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) BOOL assertsUseAfterFreeze;
@property (nonatomic) BOOL shouldLogTouches;

+ (id)_allowlistedClasses;
+ (id)_reportDateFormatter;

- (id)initWithCoder:(id)a0;
- (id)report;
- (void)freeze;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isFrozen;
- (void)_freeze;
- (id)_reportMetadata;
- (void)_appendReportToMutableString:(id)a0 indentation:(long long)a1 paddedNameLength:(long long)a2;
- (BOOL)_assertNotFrozen;
- (id)_freezeBacktrace;
- (id)_reportEndDate;
- (id)_reportName;
- (id)_reportStartDate;
- (id)initWithName:(id)a0 uniqueIdentifier:(id)a1;

@end
