@class NSString;

@interface MTLStructMember : NSObject

@property (readonly) NSString *name;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long argumentIndex;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)indirectArgumentType;
- (id)arrayType;
- (id)structType;
- (unsigned long long)renderTargetIndex;
- (id)textureReferenceType;
- (id)pointerType;

@end
