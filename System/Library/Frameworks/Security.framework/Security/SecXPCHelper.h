@interface SecXPCHelper : NSObject

+ (id)cleanObjectForXPC:(id)a0;
+ (id)safeCKErrorPrimitiveClasses;
+ (id)safeErrorClasses;
+ (id)errorFromEncodedData:(id)a0;
+ (id)cleanseErrorForXPC:(id)a0;
+ (id)cleanDictionaryForXPC:(id)a0;
+ (id)safeErrorPrimitiveClasses;
+ (id)encodedDataFromError:(id)a0;
+ (id)safeErrorCollectionClasses;

@end
