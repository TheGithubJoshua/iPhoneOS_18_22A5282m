@class PKPaper, NSMutableDictionary;

@interface PKPrintSettings : NSObject

@property (retain, nonatomic) NSMutableDictionary *dict;
@property (retain, nonatomic) PKPaper *paper;

+ (id)default;
+ (id)photo;
+ (id)printSettingsForPrinter:(id)a0;

- (id)init;
- (void)setObject:(id)a0 forKey:(id)a1;
- (id)objectForKey:(id)a0;
- (id)settingsDict;
- (void)removeObjectForKey:(id)a0;
- (id)description;
- (void)dealloc;

@end
