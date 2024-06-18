@class NSString, TSULocale;

@interface TSUDurationFormatter : NSFormatter

@property (copy, nonatomic) NSString *format;
@property (nonatomic) unsigned char compactStyleStartUnit;
@property (readonly) TSULocale *locale;

- (id)initWithLocale:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)stringForObjectValue:(id)a0;
- (void)dealloc;
- (BOOL)getObjectValue:(out id *)a0 forString:(id)a1 errorDescription:(out id *)a2;
- (void)p_commonInit;

@end
