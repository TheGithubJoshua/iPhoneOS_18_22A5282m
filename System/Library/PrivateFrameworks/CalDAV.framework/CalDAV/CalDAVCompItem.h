@class NSString;

@interface CalDAVCompItem : CoreDAVItem

@property (retain, nonatomic) NSString *nameAttribute;

- (id)init;
- (void)parserFoundAttributes:(id)a0;
- (void)write:(id)a0;
- (void).cxx_destruct;

@end
