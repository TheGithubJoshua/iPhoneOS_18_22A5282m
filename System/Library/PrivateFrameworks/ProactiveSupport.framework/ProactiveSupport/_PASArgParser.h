@class NSMutableArray, NSMutableSet;

@interface _PASArgParser : NSObject

@property (readonly, nonatomic) NSMutableArray *registeredSubcommands;
@property (readonly, nonatomic) NSMutableArray *registeredOptions;
@property (retain, nonatomic) NSMutableSet *requiredOptions;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)boolValueForArgument:(id)a0 error:(id *)a1;
+ (id)enumValueForArgument:(id)a0 withMapping:(id)a1 error:(id *)a2;
+ (id)numberValueForArgument:(id)a0 error:(id *)a1;
+ (id)parserWithHandler:(id /* block */)a0;
+ (id)simpleParserWithHelpGenerator:(id /* block */)a0 version:(id)a1 handler:(id /* block */)a2;

- (id)initWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)description;
- (id)optionShortHelp;
- (id)_argumentParseTemplate:(id)a0 longArgs:(struct option **)a1;
- (void)registerOption:(id)a0;
- (int)invokeHandlerWithArguments:(const char **)a0 count:(int)a1 parseErrorCode:(int)a2 error:(id *)a3;
- (id)naiveUsageHelpWithPositionalArgString:(id)a0;
- (id)optionLongHelp;
- (void)registerSubcommand:(id)a0;
- (id)subcommandLongHelp;

@end
