@class NSString;

@interface TSKDateTimeFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) NSString *formatString;

+ (id)defaultDateOnlyShortFormatForLocale:(id)a0;

- (id)initWithLocale:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithFormatType:(unsigned int)a0;
- (id)initWithFormatString:(id)a0;
- (id)asDateTimeFormat;
- (id)stringFromDate:(id)a0 locale:(id)a1;

@end
