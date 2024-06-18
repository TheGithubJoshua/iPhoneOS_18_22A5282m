@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying> {
    NSMutableArray *_attributes;
}

@property (copy, nonatomic) NSDictionary *attributesAsDictionary;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasAttributes;
- (void)close;
- (void)addAttribute:(id)a0 value:(id)a1;
- (id)initWithXMLAttributes:(id)a0;
- (void)writeAttributes:(id)a0;

@end
