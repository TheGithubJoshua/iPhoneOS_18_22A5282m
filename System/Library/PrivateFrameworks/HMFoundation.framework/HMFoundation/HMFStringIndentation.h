@interface HMFStringIndentation : HMFObject

@property (readonly) unsigned long long width;
@property (readonly) unsigned long long level;

+ (id)indentationWithWidth:(unsigned long long)a0;
+ (id)indentation;

- (id)init;
- (id)indentationByLevels:(long long)a0;
- (id)initWithWidth:(unsigned long long)a0;
- (id)description;

@end
