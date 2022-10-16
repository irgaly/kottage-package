#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class KottageKottageEnvironment, KottageKotlinx_serialization_jsonJson, KottageKotlinx_coroutines_coreCoroutineDispatcher, KottageKottageOptionsBuilder, KottageKottageCompanion, KottageKottageStorageOptionsBuilder, KottageKottageEventFlow, KottageKottageOptions, KottageKottageDatabaseFiles, KottageKottageEntry<T>, KottageKottageContext, KottageKottageEventType, KottageKottageEventCompanion, KottageKottageEvent, KottageKotlinEnumCompanion, KottageKotlinEnum<E>, KottageKottageEventTypeCompanion, KottageKotlinArray<T>, KottageKottageListMetaData, KottageKottageListEntry, KottageKottageListValue<T>, KottageKottageListDirection, KottageKottageListPage, KottageKottageListOptions, KottageKottageListEntryCompanion, KottageKottageListOptionsBuilder, KottageKottageStorageOptions, KottageCoreContext, KottageKotlinByteArray, KottageItemListStats, KottageItemStats, KottageKotlinx_serialization_coreSerializersModule, KottageKotlinx_serialization_jsonJsonDefault, KottageKotlinx_serialization_jsonJsonElement, KottageKotlinx_serialization_jsonJsonConfiguration, KottageKotlinAbstractCoroutineContextElement, KottageKotlinx_coroutines_coreCoroutineDispatcherKey, KottageKotlinThrowable, KottageKotlinException, KottageKotlinRuntimeException, KottageKotlinIllegalStateException, KottageKotlinIllegalArgumentException, KottageKotlinKTypeProjection, KottageKotlinByteIterator, KottageKotlinx_serialization_jsonJsonElementCompanion, KottageKotlinAbstractCoroutineContextKey<B, E>, KottageKotlinKVariance, KottageKotlinKTypeProjectionCompanion, KottageKotlinx_serialization_coreSerialKind, KottageKotlinNothing;

@protocol KottageKotlinx_coroutines_coreCoroutineScope, KottageKottageStorage, KottageKotlinx_coroutines_coreFlow, KottageKotlinKType, KottageKottageCalendar, KottageKotlinx_serialization_coreKSerializer, KottageKotlinx_coroutines_coreFlowCollector, KottageKotlinComparable, KottageKottageList, KottageKotlinReadOnlyProperty, KottageKottageStrategy, KottageKottageEncoder, KottageKottageStrategyOperator, KottageKotlinx_serialization_coreDeserializationStrategy, KottageKotlinx_serialization_coreSerializationStrategy, KottageKotlinx_serialization_coreSerialFormat, KottageKotlinx_serialization_coreStringFormat, KottageKotlinCoroutineContextKey, KottageKotlinCoroutineContextElement, KottageKotlinCoroutineContext, KottageKotlinContinuation, KottageKotlinContinuationInterceptor, KottageKotlinx_coroutines_coreRunnable, KottageKotlinKClassifier, KottageKotlinx_serialization_coreEncoder, KottageKotlinx_serialization_coreSerialDescriptor, KottageKotlinx_serialization_coreDecoder, KottageKotlinIterator, KottageKotlinKProperty, KottageKotlinx_serialization_coreSerializersModuleCollector, KottageKotlinKClass, KottageKotlinx_serialization_coreCompositeEncoder, KottageKotlinAnnotation, KottageKotlinx_serialization_coreCompositeDecoder, KottageKotlinKAnnotatedElement, KottageKotlinKCallable, KottageKotlinKDeclarationContainer;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface KottageBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KottageBase (KottageBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface KottageMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface KottageMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKottageKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface KottageNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface KottageByte : KottageNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface KottageUByte : KottageNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface KottageShort : KottageNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface KottageUShort : KottageNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface KottageInt : KottageNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface KottageUInt : KottageNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface KottageLong : KottageNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface KottageULong : KottageNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface KottageFloat : KottageNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface KottageDouble : KottageNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface KottageBoolean : KottageNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kottage")))
@interface KottageKottage : KottageBase
- (instancetype)initWithName:(NSString *)name directoryPath:(NSString *)directoryPath environment:(KottageKottageEnvironment *)environment json:(KottageKotlinx_serialization_jsonJson *)json dispatcher:(KottageKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher scope:(id<KottageKotlinx_coroutines_coreCoroutineScope>)scope optionsBuilder:(void (^ _Nullable)(KottageKottageOptionsBuilder *))optionsBuilder __attribute__((swift_name("init(name:directoryPath:environment:json:dispatcher:scope:optionsBuilder:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKottageCompanion *companion __attribute__((swift_name("companion")));
- (id<KottageKottageStorage>)cacheName:(NSString *)name optionsBuilder:(void (^ _Nullable)(KottageKottageStorageOptionsBuilder *))optionsBuilder __attribute__((swift_name("cache(name:optionsBuilder:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)compactWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("compact(completionHandler:)")));
- (KottageKottageEventFlow *)eventFlowAfterUnixTimeMillisAt:(KottageLong * _Nullable)afterUnixTimeMillisAt __attribute__((swift_name("eventFlow(afterUnixTimeMillisAt:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)exportFile:(NSString *)file directoryPath:(NSString *)directoryPath completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("export(file:directoryPath:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDatabaseStatusWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDatabaseStatus(completionHandler:)")));
- (id<KottageKottageStorage>)storageName:(NSString *)name optionsBuilder:(void (^ _Nullable)(KottageKottageStorageOptionsBuilder *))optionsBuilder __attribute__((swift_name("storage(name:optionsBuilder:)")));
@property (readonly) NSString *directoryPath __attribute__((swift_name("directoryPath")));
@property (readonly) KottageKottageEnvironment *environment __attribute__((swift_name("environment")));
@property (readonly) KottageKotlinx_serialization_jsonJson *json __attribute__((swift_name("json")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KottageKottageOptions *options __attribute__((swift_name("options")));
@property (readonly) void (^ _Nullable optionsBuilder)(KottageKottageOptionsBuilder *) __attribute__((swift_name("optionsBuilder")));
@property (readonly) id<KottageKotlinx_coroutines_coreFlow> simpleEventFlow __attribute__((swift_name("simpleEventFlow")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kottage.Companion")))
@interface KottageKottageCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKottageCompanion *shared __attribute__((swift_name("shared")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)createOldDatabaseName:(NSString *)name directoryPath:(NSString *)directoryPath environment:(KottageKottageEnvironment *)environment version:(int32_t)version dispatcher:(KottageKotlinx_coroutines_coreCoroutineDispatcher *)dispatcher completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("createOldDatabase(name:directoryPath:environment:version:dispatcher:completionHandler:)")));
- (KottageKottageDatabaseFiles *)getDatabaseFilesName:(NSString *)name directoryPath:(NSString *)directoryPath __attribute__((swift_name("getDatabaseFiles(name:directoryPath:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kottage.DatabaseFiles")))
@interface KottageKottageDatabaseFiles : KottageBase
- (instancetype)initWithDatabaseFile:(NSString *)databaseFile walFile:(NSString *)walFile shmFile:(NSString *)shmFile __attribute__((swift_name("init(databaseFile:walFile:shmFile:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageDatabaseFiles *)doCopyDatabaseFile:(NSString *)databaseFile walFile:(NSString *)walFile shmFile:(NSString *)shmFile __attribute__((swift_name("doCopy(databaseFile:walFile:shmFile:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *databaseFile __attribute__((swift_name("databaseFile")));
@property (readonly) NSString *shmFile __attribute__((swift_name("shmFile")));
@property (readonly) NSString *walFile __attribute__((swift_name("walFile")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEntry")))
@interface KottageKottageEntry<T> : KottageBase

/**
 @note This method converts instances of ClassCastException, SerializationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (T _Nullable)getAndReturnError:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("get()")));
- (KottageKottageEntry<id> *)getWithType __attribute__((swift_name("getWithType()")));
- (KottageKottageEntry<id> *)withTypeType:(id<KottageKotlinKType>)type __attribute__((swift_name("withType(type:)")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) KottageLong * _Nullable expireAt __attribute__((swift_name("expireAt")));
@property (readonly) NSString *itemType __attribute__((swift_name("itemType")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) int64_t lastReadAt __attribute__((swift_name("lastReadAt")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEnvironment")))
@interface KottageKottageEnvironment : KottageBase
- (instancetype)initWithContext:(KottageKottageContext *)context calendar:(id<KottageKottageCalendar>)calendar __attribute__((swift_name("init(context:calendar:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageContext *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKottageCalendar>)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageEnvironment *)doCopyContext:(KottageKottageContext *)context calendar:(id<KottageKottageCalendar>)calendar __attribute__((swift_name("doCopy(context:calendar:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KottageKottageCalendar> calendar __attribute__((swift_name("calendar")));
@property (readonly) KottageKottageContext *context __attribute__((swift_name("context")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEvent")))
@interface KottageKottageEvent : KottageBase
- (instancetype)initWithId:(NSString *)id createdAt:(int64_t)createdAt expireAt:(KottageLong * _Nullable)expireAt itemType:(NSString *)itemType itemKey:(NSString *)itemKey listType:(NSString * _Nullable)listType listPositionId:(NSString * _Nullable)listPositionId eventType:(KottageKottageEventType *)eventType __attribute__((swift_name("init(id:createdAt:expireAt:itemType:itemKey:listType:listPositionId:eventType:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKottageEventCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageLong * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageEventType *)component8 __attribute__((swift_name("component8()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageEvent *)doCopyId:(NSString *)id createdAt:(int64_t)createdAt expireAt:(KottageLong * _Nullable)expireAt itemType:(NSString *)itemType itemKey:(NSString *)itemKey listType:(NSString * _Nullable)listType listPositionId:(NSString * _Nullable)listPositionId eventType:(KottageKottageEventType *)eventType __attribute__((swift_name("doCopy(id:createdAt:expireAt:itemType:itemKey:listType:listPositionId:eventType:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t createdAt __attribute__((swift_name("createdAt")));
@property (readonly) KottageKottageEventType *eventType __attribute__((swift_name("eventType")));
@property (readonly) KottageLong * _Nullable expireAt __attribute__((swift_name("expireAt")));
@property (readonly) NSString *id __attribute__((swift_name("id")));
@property (readonly) NSString *itemKey __attribute__((swift_name("itemKey")));
@property (readonly) NSString *itemType __attribute__((swift_name("itemType")));
@property (readonly) NSString * _Nullable listPositionId __attribute__((swift_name("listPositionId")));
@property (readonly) NSString * _Nullable listType __attribute__((swift_name("listType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEvent.Companion")))
@interface KottageKottageEventCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKottageEventCompanion *shared __attribute__((swift_name("shared")));
- (id<KottageKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol KottageKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KottageKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEventFlow")))
@interface KottageKottageEventFlow : KottageBase <KottageKotlinx_coroutines_coreFlow>

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<KottageKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol KottageKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface KottageKotlinEnum<E> : KottageBase <KottageKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEventType")))
@interface KottageKottageEventType : KottageKotlinEnum<KottageKottageEventType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KottageKottageEventTypeCompanion *companion __attribute__((swift_name("companion")));
@property (class, readonly) KottageKottageEventType *create __attribute__((swift_name("create")));
@property (class, readonly) KottageKottageEventType *update __attribute__((swift_name("update")));
@property (class, readonly) KottageKottageEventType *delete_ __attribute__((swift_name("delete_")));
+ (KottageKotlinArray<KottageKottageEventType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageEventType.Companion")))
@interface KottageKottageEventTypeCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKottageEventTypeCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("KottageList")))
@protocol KottageKottageList
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKey:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(key:value:type:metaData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAllValues:(NSArray<KottageKottageListValue<id> *> *)values completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addAll(values:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addAllFirstValues:(NSArray<KottageKottageListValue<id> *> *)values completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addAllFirst(values:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addFirstKey:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFirst(key:value:type:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKeyKey:(NSString *)key metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addKey(key:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKeyFirstKey:(NSString *)key metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addKeyFirst(key:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKeysKeys:(NSArray<NSString *> *)keys metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addKeys(keys:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)addKeysFirstKeys:(NSArray<NSString *> *)keys metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("addKeysFirst(keys:metaData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)compactWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("compact(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPositionId:(NSString *)positionId completionHandler:(void (^)(KottageKottageListEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("get(positionId:completionHandler:)")));

/**
 @note This method converts instances of IndexOutOfBoundsException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getByIndexIndex:(int64_t)index fromPositionId:(NSString * _Nullable)fromPositionId direction:(KottageKottageListDirection *)direction completionHandler:(void (^)(KottageKottageListEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getByIndex(index:fromPositionId:direction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDebugListRawDataWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDebugListRawData(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDebugStatusWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDebugStatus(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getFirstWithCompletionHandler:(void (^)(KottageKottageListEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getFirst(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getLastWithCompletionHandler:(void (^)(KottageKottageListEntry * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getLast(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getPageFromPositionId:(NSString * _Nullable)positionId pageSize:(KottageLong * _Nullable)pageSize direction:(KottageKottageListDirection *)direction completionHandler:(void (^)(KottageKottageListPage * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getPageFrom(positionId:pageSize:direction:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getSizeWithCompletionHandler:(void (^)(KottageLong * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getSize(completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertAfterPositionId:(NSString *)positionId key:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertAfter(positionId:key:value:type:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertAllAfterPositionId:(NSString *)positionId values:(NSArray<KottageKottageListValue<id> *> *)values completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertAllAfter(positionId:values:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertAllBeforePositionId:(NSString *)positionId values:(NSArray<KottageKottageListValue<id> *> *)values completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertAllBefore(positionId:values:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertBeforePositionId:(NSString *)positionId key:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertBefore(positionId:key:value:type:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertKeyAfterPositionId:(NSString *)positionId key:(NSString *)key metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertKeyAfter(positionId:key:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertKeyBeforePositionId:(NSString *)positionId key:(NSString *)key metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertKeyBefore(positionId:key:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertKeysAfterPositionId:(NSString *)positionId keys:(NSArray<NSString *> *)keys metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertKeysAfter(positionId:keys:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)insertKeysBeforePositionId:(NSString *)positionId keys:(NSArray<NSString *> *)keys metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("insertKeysBefore(positionId:keys:metaData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isEmptyWithCompletionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isEmpty(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)isNotEmptyWithCompletionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("isNotEmpty(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removePositionId:(NSString *)positionId completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("remove(positionId:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updatePositionId:(NSString *)positionId key:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(positionId:key:value:type:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)updateKeyPositionId:(NSString *)positionId key:(NSString *)key completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("updateKey(positionId:key:completionHandler:)")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KottageKottageListOptions *options __attribute__((swift_name("options")));
@property (readonly) id<KottageKottageStorage> storage __attribute__((swift_name("storage")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListDirection")))
@interface KottageKottageListDirection : KottageKotlinEnum<KottageKottageListDirection *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageKottageListDirection *forward __attribute__((swift_name("forward")));
@property (class, readonly) KottageKottageListDirection *backward __attribute__((swift_name("backward")));
+ (KottageKotlinArray<KottageKottageListDirection *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListEntry")))
@interface KottageKottageListEntry : KottageBase
@property (class, readonly, getter=companion) KottageKottageListEntryCompanion *companion __attribute__((swift_name("companion")));
- (KottageKottageEntry<id> *)entry __attribute__((swift_name("entry()")));
- (KottageKottageEntry<id> *)entryType:(id<KottageKotlinKType>)type __attribute__((swift_name("entry(type:)")));
- (id)value __attribute__((swift_name("value()")));

/**
 @note This method converts instances of ClassCastException, SerializationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (id _Nullable)valueType:(id<KottageKotlinKType>)type error:(NSError * _Nullable * _Nullable)error __attribute__((swift_name("value(type:)")));
@property (readonly) NSString * _Nullable currentKey __attribute__((swift_name("currentKey")));
@property (readonly) NSString * _Nullable info __attribute__((swift_name("info")));
@property (readonly) NSString *itemKey __attribute__((swift_name("itemKey")));
@property (readonly) NSString * _Nullable nextKey __attribute__((swift_name("nextKey")));
@property (readonly) NSString * _Nullable nextPositionId __attribute__((swift_name("nextPositionId")));
@property (readonly) NSString *positionId __attribute__((swift_name("positionId")));
@property (readonly) NSString * _Nullable previousKey __attribute__((swift_name("previousKey")));
@property (readonly) NSString * _Nullable previousPositionId __attribute__((swift_name("previousPositionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListEntry.Companion")))
@interface KottageKottageListEntryCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKottageListEntryCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListMetaData")))
@interface KottageKottageListMetaData : KottageBase
- (instancetype)initWithInfo:(NSString * _Nullable)info previousKey:(NSString * _Nullable)previousKey currentKey:(NSString * _Nullable)currentKey nextKey:(NSString * _Nullable)nextKey __attribute__((swift_name("init(info:previousKey:currentKey:nextKey:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListMetaData *)doCopyInfo:(NSString * _Nullable)info previousKey:(NSString * _Nullable)previousKey currentKey:(NSString * _Nullable)currentKey nextKey:(NSString * _Nullable)nextKey __attribute__((swift_name("doCopy(info:previousKey:currentKey:nextKey:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable currentKey __attribute__((swift_name("currentKey")));
@property (readonly) NSString * _Nullable info __attribute__((swift_name("info")));
@property (readonly) NSString * _Nullable nextKey __attribute__((swift_name("nextKey")));
@property (readonly) NSString * _Nullable previousKey __attribute__((swift_name("previousKey")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListOptions")))
@interface KottageKottageListOptions : KottageBase
- (instancetype)initWithItemExpireTime:(id _Nullable)itemExpireTime __attribute__((swift_name("init(itemExpireTime:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListOptions *)doCopyItemExpireTime:(id _Nullable)itemExpireTime __attribute__((swift_name("doCopy(itemExpireTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable itemExpireTime __attribute__((swift_name("itemExpireTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListOptions.Builder")))
@interface KottageKottageListOptionsBuilder : KottageBase
- (instancetype)initWithItemExpireTime:(id _Nullable)itemExpireTime __attribute__((swift_name("init(itemExpireTime:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageListOptions *)build __attribute__((swift_name("build()")));
- (id _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListOptionsBuilder *)doCopyItemExpireTime:(id _Nullable)itemExpireTime __attribute__((swift_name("doCopy(itemExpireTime:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable itemExpireTime __attribute__((swift_name("itemExpireTime")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListPage")))
@interface KottageKottageListPage : KottageBase
- (instancetype)initWithItems:(NSArray<KottageKottageListEntry *> *)items previousPositionId:(NSString * _Nullable)previousPositionId nextPositionId:(NSString * _Nullable)nextPositionId __attribute__((swift_name("init(items:previousPositionId:nextPositionId:)"))) __attribute__((objc_designated_initializer));
- (NSArray<KottageKottageListEntry *> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListPage *)doCopyItems:(NSArray<KottageKottageListEntry *> *)items previousPositionId:(NSString * _Nullable)previousPositionId nextPositionId:(NSString * _Nullable)nextPositionId __attribute__((swift_name("doCopy(items:previousPositionId:nextPositionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL hasNext __attribute__((swift_name("hasNext")));
@property (readonly) BOOL hasPrevious __attribute__((swift_name("hasPrevious")));
@property (readonly) BOOL isEmpty __attribute__((swift_name("isEmpty")));
@property (readonly) NSArray<KottageKottageListEntry *> *items __attribute__((swift_name("items")));
@property (readonly) NSString * _Nullable nextPositionId __attribute__((swift_name("nextPositionId")));
@property (readonly) NSString * _Nullable previousPositionId __attribute__((swift_name("previousPositionId")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListValue")))
@interface KottageKottageListValue<T> : KottageBase
- (instancetype)initWithKey:(NSString *)key value:(T)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData __attribute__((swift_name("init(key:value:type:metaData:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (T)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKotlinKType>)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListMetaData * _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageListValue<T> *)doCopyKey:(NSString *)key value:(T)value type:(id<KottageKotlinKType>)type metaData:(KottageKottageListMetaData * _Nullable)metaData __attribute__((swift_name("doCopy(key:value:type:metaData:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *key __attribute__((swift_name("key")));
@property (readonly) KottageKottageListMetaData * _Nullable metaData __attribute__((swift_name("metaData")));
@property (readonly) id<KottageKotlinKType> type __attribute__((swift_name("type")));
@property (readonly) T value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageOptions")))
@interface KottageKottageOptions : KottageBase
- (instancetype)initWithAutoCompactionDuration:(id _Nullable)autoCompactionDuration garbageCollectionTimeOfInvalidatedListEntries:(id _Nullable)garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("init(autoCompactionDuration:garbageCollectionTimeOfInvalidatedListEntries:)"))) __attribute__((objc_designated_initializer));
- (id _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageOptions *)doCopyAutoCompactionDuration:(id _Nullable)autoCompactionDuration garbageCollectionTimeOfInvalidatedListEntries:(id _Nullable)garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("doCopy(autoCompactionDuration:garbageCollectionTimeOfInvalidatedListEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable autoCompactionDuration __attribute__((swift_name("autoCompactionDuration")));
@property (readonly) id _Nullable garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("garbageCollectionTimeOfInvalidatedListEntries")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageOptions.Builder")))
@interface KottageKottageOptionsBuilder : KottageBase
- (instancetype)initWithAutoCompactionDuration:(id _Nullable)autoCompactionDuration garbageCollectionTimeOfInvalidatedListEntries:(id _Nullable)garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("init(autoCompactionDuration:garbageCollectionTimeOfInvalidatedListEntries:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageOptions *)build __attribute__((swift_name("build()")));
- (id _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageOptionsBuilder *)doCopyAutoCompactionDuration:(id _Nullable)autoCompactionDuration garbageCollectionTimeOfInvalidatedListEntries:(id _Nullable)garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("doCopy(autoCompactionDuration:garbageCollectionTimeOfInvalidatedListEntries:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable autoCompactionDuration __attribute__((swift_name("autoCompactionDuration")));
@property id _Nullable garbageCollectionTimeOfInvalidatedListEntries __attribute__((swift_name("garbageCollectionTimeOfInvalidatedListEntries")));
@end;

__attribute__((swift_name("KottageStorage")))
@protocol KottageKottageStorage
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)compactWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("compact(completionHandler:)")));
- (KottageKottageEventFlow *)eventFlowAfterUnixTimeMillisAt:(KottageLong * _Nullable)afterUnixTimeMillisAt __attribute__((swift_name("eventFlow(afterUnixTimeMillisAt:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)existsKey:(NSString *)key completionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exists(key:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getKey:(NSString *)key type:(id<KottageKotlinKType>)type completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(key:type:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getDebugStatusWithCompletionHandler:(void (^)(NSString * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getDebugStatus(completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEntryKey:(NSString *)key type:(id<KottageKotlinKType>)type completionHandler:(void (^)(KottageKottageEntry<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntry(key:type:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEntryOrNullKey:(NSString *)key type:(id<KottageKotlinKType>)type completionHandler:(void (^)(KottageKottageEntry<id> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntryOrNull(key:type:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getEventsAfterUnixTimeMillisAt:(int64_t)afterUnixTimeMillisAt limit:(KottageLong * _Nullable)limit completionHandler:(void (^)(NSArray<KottageKottageEvent *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEvents(afterUnixTimeMillisAt:limit:completionHandler:)")));

/**
 @note This method converts instances of ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)getOrNullKey:(NSString *)key type:(id<KottageKotlinKType>)type completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getOrNull(key:type:completionHandler:)")));
- (id<KottageKottageList>)listName:(NSString *)name optionsBuilder:(void (^ _Nullable)(KottageKottageListOptionsBuilder *))optionsBuilder __attribute__((swift_name("list(name:optionsBuilder:)")));
- (id<KottageKotlinReadOnlyProperty>)nullablePropertyType:(id<KottageKotlinKType>)type key:(NSString * _Nullable)key expireTime:(id _Nullable)expireTime __attribute__((swift_name("nullableProperty(type:key:expireTime:)")));
- (id<KottageKotlinReadOnlyProperty>)propertyType:(id<KottageKotlinKType>)type key:(NSString * _Nullable)key expireTime:(id _Nullable)expireTime defaultValue:(id (^)(void))defaultValue __attribute__((swift_name("property(type:key:expireTime:defaultValue:)")));

/**
 @note This method converts instances of ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)putKey:(NSString *)key value:(id)value type:(id<KottageKotlinKType>)type expireTime:(id _Nullable)expireTime completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("put(key:value:type:expireTime:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeKey:(NSString *)key completionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("remove(key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)removeAllKey:(NSString *)key completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("removeAll(key:completionHandler:)")));
@property (readonly) id _Nullable defaultExpireTime __attribute__((swift_name("defaultExpireTime")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) KottageKottageStorageOptions *options __attribute__((swift_name("options")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageStorageOptions")))
@interface KottageKottageStorageOptions : KottageBase
- (instancetype)initWithStrategy:(id<KottageKottageStrategy>)strategy defaultExpireTime:(id _Nullable)defaultExpireTime maxEventEntryCount:(int64_t)maxEventEntryCount eventExpireTime:(id _Nullable)eventExpireTime ignoreJsonDeserializationError:(BOOL)ignoreJsonDeserializationError json:(KottageKotlinx_serialization_jsonJson * _Nullable)json encoder:(id<KottageKottageEncoder> _Nullable)encoder __attribute__((swift_name("init(strategy:defaultExpireTime:maxEventEntryCount:eventExpireTime:ignoreJsonDeserializationError:json:encoder:)"))) __attribute__((objc_designated_initializer));
- (id<KottageKottageStrategy>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKotlinx_serialization_jsonJson * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKottageEncoder> _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageStorageOptions *)doCopyStrategy:(id<KottageKottageStrategy>)strategy defaultExpireTime:(id _Nullable)defaultExpireTime maxEventEntryCount:(int64_t)maxEventEntryCount eventExpireTime:(id _Nullable)eventExpireTime ignoreJsonDeserializationError:(BOOL)ignoreJsonDeserializationError json:(KottageKotlinx_serialization_jsonJson * _Nullable)json encoder:(id<KottageKottageEncoder> _Nullable)encoder __attribute__((swift_name("doCopy(strategy:defaultExpireTime:maxEventEntryCount:eventExpireTime:ignoreJsonDeserializationError:json:encoder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id _Nullable defaultExpireTime __attribute__((swift_name("defaultExpireTime")));
@property (readonly) id<KottageKottageEncoder> _Nullable encoder __attribute__((swift_name("encoder")));
@property (readonly) id _Nullable eventExpireTime __attribute__((swift_name("eventExpireTime")));
@property (readonly) BOOL ignoreJsonDeserializationError __attribute__((swift_name("ignoreJsonDeserializationError")));
@property (readonly) KottageKotlinx_serialization_jsonJson * _Nullable json __attribute__((swift_name("json")));
@property (readonly) int64_t maxEventEntryCount __attribute__((swift_name("maxEventEntryCount")));
@property (readonly) id<KottageKottageStrategy> strategy __attribute__((swift_name("strategy")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageStorageOptions.Builder")))
@interface KottageKottageStorageOptionsBuilder : KottageBase
- (instancetype)initWithStrategy:(id<KottageKottageStrategy>)strategy defaultExpireTime:(id _Nullable)defaultExpireTime maxEventEntryCount:(int64_t)maxEventEntryCount eventExpireTime:(id _Nullable)eventExpireTime ignoreJsonDeserializationError:(BOOL)ignoreJsonDeserializationError json:(KottageKotlinx_serialization_jsonJson * _Nullable)json encoder:(id<KottageKottageEncoder> _Nullable)encoder __attribute__((swift_name("init(strategy:defaultExpireTime:maxEventEntryCount:eventExpireTime:ignoreJsonDeserializationError:json:encoder:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageStorageOptions *)build __attribute__((swift_name("build()")));
- (id<KottageKottageStrategy>)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component5 __attribute__((swift_name("component5()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKotlinx_serialization_jsonJson * _Nullable)component6 __attribute__((swift_name("component6()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKottageEncoder> _Nullable)component7 __attribute__((swift_name("component7()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKottageStorageOptionsBuilder *)doCopyStrategy:(id<KottageKottageStrategy>)strategy defaultExpireTime:(id _Nullable)defaultExpireTime maxEventEntryCount:(int64_t)maxEventEntryCount eventExpireTime:(id _Nullable)eventExpireTime ignoreJsonDeserializationError:(BOOL)ignoreJsonDeserializationError json:(KottageKotlinx_serialization_jsonJson * _Nullable)json encoder:(id<KottageKottageEncoder> _Nullable)encoder __attribute__((swift_name("doCopy(strategy:defaultExpireTime:maxEventEntryCount:eventExpireTime:ignoreJsonDeserializationError:json:encoder:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property id _Nullable defaultExpireTime __attribute__((swift_name("defaultExpireTime")));
@property id<KottageKottageEncoder> _Nullable encoder __attribute__((swift_name("encoder")));
@property id _Nullable eventExpireTime __attribute__((swift_name("eventExpireTime")));
@property BOOL ignoreJsonDeserializationError __attribute__((swift_name("ignoreJsonDeserializationError")));
@property KottageKotlinx_serialization_jsonJson * _Nullable json __attribute__((swift_name("json")));
@property int64_t maxEventEntryCount __attribute__((swift_name("maxEventEntryCount")));
@property id<KottageKottageStrategy> strategy __attribute__((swift_name("strategy")));
@end;

__attribute__((swift_name("KottageCalendar")))
@protocol KottageKottageCalendar
@required
- (int64_t)nowUnixTimeMillis __attribute__((swift_name("nowUnixTimeMillis()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageContext")))
@interface KottageKottageContext : KottageBase
- (instancetype)initWithContext:(KottageCoreContext *)context __attribute__((swift_name("init(context:)"))) __attribute__((objc_designated_initializer));
- (KottageKottageContext *)doCopyContext:(KottageCoreContext *)context __attribute__((swift_name("doCopy(context:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("KottageStore")))
@protocol KottageKottageStore
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)clearWithCompletionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("clear(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)existsWithCompletionHandler:(void (^)(KottageBoolean * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("exists(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)readWithCompletionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("read(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)writeValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("write(value:completionHandler:)")));
@end;

__attribute__((swift_name("KottageStrategy")))
@protocol KottageKottageStrategy
@required
- (void)onItemReadKey:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ __attribute__((swift_name("onItemRead(key:itemType:now:operator:)")));
- (void)onPostItemCreateKey:(NSString *)key itemType:(NSString *)itemType itemCount:(int64_t)itemCount now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ __attribute__((swift_name("onPostItemCreate(key:itemType:itemCount:now:operator:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageFifoStrategy")))
@interface KottageKottageFifoStrategy : KottageBase <KottageKottageStrategy>
- (instancetype)initWithMaxEntryCount:(int64_t)maxEntryCount reduceCount:(KottageLong * _Nullable)reduceCount __attribute__((swift_name("init(maxEntryCount:reduceCount:)"))) __attribute__((objc_designated_initializer));
- (void)onItemReadKey:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ __attribute__((swift_name("onItemRead(key:itemType:now:operator:)")));
- (void)onPostItemCreateKey:(NSString *)key itemType:(NSString *)itemType itemCount:(int64_t)itemCount now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ __attribute__((swift_name("onPostItemCreate(key:itemType:itemCount:now:operator:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageKvsStrategy")))
@interface KottageKottageKvsStrategy : KottageBase <KottageKottageStrategy>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)onItemReadKey:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ __attribute__((swift_name("onItemRead(key:itemType:now:operator:)")));
- (void)onPostItemCreateKey:(NSString *)key itemType:(NSString *)itemType itemCount:(int64_t)itemCount now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ __attribute__((swift_name("onPostItemCreate(key:itemType:itemCount:now:operator:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageLruStrategy")))
@interface KottageKottageLruStrategy : KottageBase <KottageKottageStrategy>
- (instancetype)initWithMaxEntryCount:(int64_t)maxEntryCount reduceCount:(KottageLong * _Nullable)reduceCount __attribute__((swift_name("init(maxEntryCount:reduceCount:)"))) __attribute__((objc_designated_initializer));
- (void)onItemReadKey:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ __attribute__((swift_name("onItemRead(key:itemType:now:operator:)")));
- (void)onPostItemCreateKey:(NSString *)key itemType:(NSString *)itemType itemCount:(int64_t)itemCount now:(int64_t)now operator:(id<KottageKottageStrategyOperator>)operator_ __attribute__((swift_name("onPostItemCreate(key:itemType:itemCount:now:operator:)")));
@end;

__attribute__((swift_name("KottageStrategyOperator")))
@protocol KottageKottageStrategyOperator
@required
- (int64_t)deleteExpiredItemsItemType:(NSString *)itemType now:(int64_t)now __attribute__((swift_name("deleteExpiredItems(itemType:now:)")));
- (void)deleteLeastRecentlyUsedItemType:(NSString *)itemType limit:(int64_t)limit __attribute__((swift_name("deleteLeastRecentlyUsed(itemType:limit:)")));
- (void)deleteOlderItemsItemType:(NSString *)itemType limit:(int64_t)limit __attribute__((swift_name("deleteOlderItems(itemType:limit:)")));
- (void)updateItemLastReadKey:(NSString *)key itemType:(NSString *)itemType now:(int64_t)now __attribute__((swift_name("updateItemLastRead(key:itemType:now:)")));
@end;

__attribute__((swift_name("KottageEncoder")))
@protocol KottageKottageEncoder
@required
- (KottageKotlinByteArray *)decodeEncoded:(KottageKotlinByteArray *)encoded __attribute__((swift_name("decode(encoded:)")));
- (double)decodeToDoubleEncoded:(KottageKotlinByteArray *)encoded __attribute__((swift_name("decodeToDouble(encoded:)")));
- (int64_t)decodeToLongEncoded:(KottageKotlinByteArray *)encoded __attribute__((swift_name("decodeToLong(encoded:)")));
- (NSString *)decodeToStringEncoded:(KottageKotlinByteArray *)encoded __attribute__((swift_name("decodeToString(encoded:)")));
- (KottageKotlinByteArray *)encodeValue:(KottageKotlinByteArray *)value __attribute__((swift_name("encode(value:)")));
- (KottageKotlinByteArray *)encodeValue_:(double)value __attribute__((swift_name("encode(value_:)")));
- (KottageKotlinByteArray *)encodeValue__:(int64_t)value __attribute__((swift_name("encode(value__:)")));
- (KottageKotlinByteArray *)encodeValue___:(NSString *)value __attribute__((swift_name("encode(value___:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemListStats")))
@interface KottageItemListStats : KottageBase
- (instancetype)initWithListType:(NSString *)listType count:(int64_t)count firstItemPositionId:(NSString *)firstItemPositionId lastItemPositionId:(NSString *)lastItemPositionId __attribute__((swift_name("init(listType:count:firstItemPositionId:lastItemPositionId:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageItemListStats *)doCopyListType:(NSString *)listType count:(int64_t)count firstItemPositionId:(NSString *)firstItemPositionId lastItemPositionId:(NSString *)lastItemPositionId __attribute__((swift_name("doCopy(listType:count:firstItemPositionId:lastItemPositionId:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t count __attribute__((swift_name("count")));
@property (readonly) NSString *firstItemPositionId __attribute__((swift_name("firstItemPositionId")));
@property (readonly) NSString *lastItemPositionId __attribute__((swift_name("lastItemPositionId")));
@property (readonly) NSString *listType __attribute__((swift_name("listType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ItemStats")))
@interface KottageItemStats : KottageBase
- (instancetype)initWithItemType:(NSString *)itemType count:(int64_t)count eventCount:(int64_t)eventCount __attribute__((swift_name("init(itemType:count:eventCount:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (int64_t)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageItemStats *)doCopyItemType:(NSString *)itemType count:(int64_t)count eventCount:(int64_t)eventCount __attribute__((swift_name("doCopy(itemType:count:eventCount:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int64_t count __attribute__((swift_name("count")));
@property (readonly) int64_t eventCount __attribute__((swift_name("eventCount")));
@property (readonly) NSString *itemType __attribute__((swift_name("itemType")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListValueKt")))
@interface KottageKottageListValueKt : KottageBase
+ (KottageKottageListValue<id> *)kottageListValueKey:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData __attribute__((swift_name("kottageListValue(key:value:metaData:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageListKt")))
@interface KottageKottageListKt : KottageBase

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)add:(id<KottageKottageList>)receiver key:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("add(_:key:value:metaData:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)addFirst:(id<KottageKottageList>)receiver key:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("addFirst(_:key:value:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)insertAfter:(id<KottageKottageList>)receiver positionId:(NSString *)positionId key:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertAfter(_:positionId:key:value:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)insertBefore:(id<KottageKottageList>)receiver positionId:(NSString *)positionId key:(NSString *)key value:(id)value metaData:(KottageKottageListMetaData * _Nullable)metaData completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("insertBefore(_:positionId:key:value:metaData:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)update:(id<KottageKottageList>)receiver positionId:(NSString *)positionId key:(NSString *)key value:(id)value completionHandler:(void (^)(KottageKottageListEntry * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("update(_:positionId:key:value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KottageStorageKt")))
@interface KottageKottageStorageKt : KottageBase

/**
 @note This method converts instances of NoSuchElementException, ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)get:(id<KottageKottageStorage>)receiver key:(NSString *)key completionHandler:(void (^)(id _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("get(_:key:completionHandler:)")));

/**
 @note This method converts instances of NoSuchElementException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getEntry:(id<KottageKottageStorage>)receiver key:(NSString *)key completionHandler:(void (^)(KottageKottageEntry<id> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntry(_:key:completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getEntryOrNull:(id<KottageKottageStorage>)receiver key:(NSString *)key completionHandler:(void (^)(KottageKottageEntry<id> * _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getEntryOrNull(_:key:completionHandler:)")));

/**
 @note This method converts instances of ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)getOrNull:(id<KottageKottageStorage>)receiver key:(NSString *)key completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("getOrNull(_:key:completionHandler:)")));
+ (id<KottageKotlinReadOnlyProperty>)nullableProperty:(id<KottageKottageStorage>)receiver key:(NSString * _Nullable)key expireTime:(id _Nullable)expireTime __attribute__((swift_name("nullableProperty(_:key:expireTime:)")));
+ (id<KottageKotlinReadOnlyProperty>)property:(id<KottageKottageStorage>)receiver key:(NSString * _Nullable)key expireTime:(id _Nullable)expireTime defaultValue:(id (^)(void))defaultValue __attribute__((swift_name("property(_:key:expireTime:defaultValue:)")));

/**
 @note This method converts instances of ClassCastException, SerializationException, CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
+ (void)put:(id<KottageKottageStorage>)receiver key:(NSString *)key value:(id)value expireTime:(id _Nullable)expireTime completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("put(_:key:value:expireTime:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialFormat")))
@protocol KottageKotlinx_serialization_coreSerialFormat
@required
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreStringFormat")))
@protocol KottageKotlinx_serialization_coreStringFormat <KottageKotlinx_serialization_coreSerialFormat>
@required
- (id _Nullable)decodeFromStringDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (NSString *)encodeToStringSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJson")))
@interface KottageKotlinx_serialization_jsonJson : KottageBase <KottageKotlinx_serialization_coreStringFormat>
@property (class, readonly, getter=companion) KottageKotlinx_serialization_jsonJsonDefault *companion __attribute__((swift_name("companion")));
- (id _Nullable)decodeFromJsonElementDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer element:(KottageKotlinx_serialization_jsonJsonElement *)element __attribute__((swift_name("decodeFromJsonElement(deserializer:element:)")));
- (id _Nullable)decodeFromStringDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer string:(NSString *)string __attribute__((swift_name("decodeFromString(deserializer:string:)")));
- (KottageKotlinx_serialization_jsonJsonElement *)encodeToJsonElementSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToJsonElement(serializer:value:)")));
- (NSString *)encodeToStringSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeToString(serializer:value:)")));
- (KottageKotlinx_serialization_jsonJsonElement *)parseToJsonElementString:(NSString *)string __attribute__((swift_name("parseToJsonElement(string:)")));
@property (readonly) KottageKotlinx_serialization_jsonJsonConfiguration *configuration __attribute__((swift_name("configuration")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol KottageKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<KottageKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<KottageKotlinCoroutineContextElement> _Nullable)getKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<KottageKotlinCoroutineContext>)minusKeyKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<KottageKotlinCoroutineContext>)plusContext:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol KottageKotlinCoroutineContextElement <KottageKotlinCoroutineContext>
@required
@property (readonly) id<KottageKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface KottageKotlinAbstractCoroutineContextElement : KottageBase <KottageKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<KottageKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol KottageKotlinContinuationInterceptor <KottageKotlinCoroutineContextElement>
@required
- (id<KottageKotlinContinuation>)interceptContinuationContinuation:(id<KottageKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<KottageKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher")))
@interface KottageKotlinx_coroutines_coreCoroutineDispatcher : KottageKotlinAbstractCoroutineContextElement <KottageKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<KottageKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly, getter=companion) KottageKotlinx_coroutines_coreCoroutineDispatcherKey *companion __attribute__((swift_name("companion")));
- (void)dispatchContext:(id<KottageKotlinCoroutineContext>)context block:(id<KottageKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<KottageKotlinCoroutineContext>)context block:(id<KottageKotlinx_coroutines_coreRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (id<KottageKotlinContinuation>)interceptContinuationContinuation:(id<KottageKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (BOOL)isDispatchNeededContext:(id<KottageKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (KottageKotlinx_coroutines_coreCoroutineDispatcher *)limitedParallelismParallelism:(int32_t)parallelism __attribute__((swift_name("limitedParallelism(parallelism:)")));
- (KottageKotlinx_coroutines_coreCoroutineDispatcher *)plusOther:(KottageKotlinx_coroutines_coreCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)"))) __attribute__((unavailable("Operator '+' on two CoroutineDispatcher objects is meaningless. CoroutineDispatcher is a coroutine context element and `+` is a set-sum operator for coroutine contexts. The dispatcher to the right of `+` just replaces the dispatcher to the left.")));
- (void)releaseInterceptedContinuationContinuation:(id<KottageKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol KottageKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<KottageKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface KottageKotlinThrowable : KottageBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (KottageKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) KottageKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface KottageKotlinException : KottageKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface KottageKotlinRuntimeException : KottageKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface KottageKotlinIllegalStateException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface KottageKotlinCancellationException : KottageKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinClassCastException")))
@interface KottageKotlinClassCastException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinIllegalArgumentException")))
@interface KottageKotlinIllegalArgumentException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationException")))
@interface KottageKotlinx_serialization_coreSerializationException : KottageKotlinIllegalArgumentException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinKType")))
@protocol KottageKotlinKType
@required
@property (readonly) NSArray<KottageKotlinKTypeProjection *> *arguments __attribute__((swift_name("arguments")));
@property (readonly) id<KottageKotlinKClassifier> _Nullable classifier __attribute__((swift_name("classifier")));
@property (readonly) BOOL isMarkedNullable __attribute__((swift_name("isMarkedNullable")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol KottageKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<KottageKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<KottageKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol KottageKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<KottageKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<KottageKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol KottageKotlinx_serialization_coreKSerializer <KottageKotlinx_serialization_coreSerializationStrategy, KottageKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol KottageKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface KottageKotlinEnumCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface KottageKotlinArray<T> : KottageBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(KottageInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<KottageKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinNoSuchElementException")))
@interface KottageKotlinNoSuchElementException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinIndexOutOfBoundsException")))
@interface KottageKotlinIndexOutOfBoundsException : KottageKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(KottageKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinReadOnlyProperty")))
@protocol KottageKotlinReadOnlyProperty
@required
- (id _Nullable)getValueThisRef:(id _Nullable)thisRef property:(id<KottageKotlinKProperty>)property __attribute__((swift_name("getValue(thisRef:property:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreContext")))
@interface KottageCoreContext : KottageBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinByteArray")))
@interface KottageKotlinByteArray : KottageBase
+ (instancetype)arrayWithSize:(int32_t)size __attribute__((swift_name("init(size:)")));
+ (instancetype)arrayWithSize:(int32_t)size init:(KottageByte *(^)(KottageInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (int8_t)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (KottageKotlinByteIterator *)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(int8_t)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface KottageKotlinx_serialization_coreSerializersModule : KottageBase
- (void)dumpToCollector:(id<KottageKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<KottageKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<KottageKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<KottageKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<KottageKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KottageKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<KottageKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<KottageKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJson.Default")))
@interface KottageKotlinx_serialization_jsonJsonDefault : KottageKotlinx_serialization_jsonJson
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)default_ __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinx_serialization_jsonJsonDefault *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement")))
@interface KottageKotlinx_serialization_jsonJsonElement : KottageBase
@property (class, readonly, getter=companion) KottageKotlinx_serialization_jsonJsonElementCompanion *companion __attribute__((swift_name("companion")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonConfiguration")))
@interface KottageKotlinx_serialization_jsonJsonConfiguration : KottageBase
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSpecialFloatingPointValues __attribute__((swift_name("allowSpecialFloatingPointValues")));
@property (readonly) BOOL allowStructuredMapKeys __attribute__((swift_name("allowStructuredMapKeys")));
@property (readonly) NSString *classDiscriminator __attribute__((swift_name("classDiscriminator")));
@property (readonly) BOOL coerceInputValues __attribute__((swift_name("coerceInputValues")));
@property (readonly) BOOL encodeDefaults __attribute__((swift_name("encodeDefaults")));
@property (readonly) BOOL explicitNulls __attribute__((swift_name("explicitNulls")));
@property (readonly) BOOL ignoreUnknownKeys __attribute__((swift_name("ignoreUnknownKeys")));
@property (readonly) BOOL isLenient __attribute__((swift_name("isLenient")));
@property (readonly) BOOL prettyPrint __attribute__((swift_name("prettyPrint")));
@property (readonly) NSString *prettyPrintIndent __attribute__((swift_name("prettyPrintIndent")));
@property (readonly) BOOL useAlternativeNames __attribute__((swift_name("useAlternativeNames")));
@property (readonly) BOOL useArrayPolymorphism __attribute__((swift_name("useArrayPolymorphism")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol KottageKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol KottageKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<KottageKotlinCoroutineContext> context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextKey")))
@interface KottageKotlinAbstractCoroutineContextKey<B, E> : KottageBase <KottageKotlinCoroutineContextKey>
- (instancetype)initWithBaseKey:(id<KottageKotlinCoroutineContextKey>)baseKey safeCast:(E _Nullable (^)(id<KottageKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineDispatcher.Key")))
@interface KottageKotlinx_coroutines_coreCoroutineDispatcherKey : KottageKotlinAbstractCoroutineContextKey<id<KottageKotlinContinuationInterceptor>, KottageKotlinx_coroutines_coreCoroutineDispatcher *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithBaseKey:(id<KottageKotlinCoroutineContextKey>)baseKey safeCast:(id<KottageKotlinCoroutineContextElement> _Nullable (^)(id<KottageKotlinCoroutineContextElement>))safeCast __attribute__((swift_name("init(baseKey:safeCast:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)key __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinx_coroutines_coreCoroutineDispatcherKey *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreRunnable")))
@protocol KottageKotlinx_coroutines_coreRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection")))
@interface KottageKotlinKTypeProjection : KottageBase
- (instancetype)initWithVariance:(KottageKotlinKVariance * _Nullable)variance type:(id<KottageKotlinKType> _Nullable)type __attribute__((swift_name("init(variance:type:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) KottageKotlinKTypeProjectionCompanion *companion __attribute__((swift_name("companion")));
- (KottageKotlinKVariance * _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (id<KottageKotlinKType> _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (KottageKotlinKTypeProjection *)doCopyVariance:(KottageKotlinKVariance * _Nullable)variance type:(id<KottageKotlinKType> _Nullable)type __attribute__((swift_name("doCopy(variance:type:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) id<KottageKotlinKType> _Nullable type __attribute__((swift_name("type")));
@property (readonly) KottageKotlinKVariance * _Nullable variance __attribute__((swift_name("variance")));
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol KottageKotlinKClassifier
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol KottageKotlinx_serialization_coreEncoder
@required
- (id<KottageKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<KottageKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<KottageKotlinx_serialization_coreEncoder>)encodeInlineDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("encodeInline(descriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol KottageKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<KottageKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<KottageKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<KottageKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) KottageKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol KottageKotlinx_serialization_coreDecoder
@required
- (id<KottageKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<KottageKotlinx_serialization_coreDecoder>)decodeInlineDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeInline(descriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (KottageKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol KottageKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol KottageKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKCallable")))
@protocol KottageKotlinKCallable <KottageKotlinKAnnotatedElement>
@required
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) id<KottageKotlinKType> returnType __attribute__((swift_name("returnType")));
@end;

__attribute__((swift_name("KotlinKProperty")))
@protocol KottageKotlinKProperty <KottageKotlinKCallable>
@required
@end;

__attribute__((swift_name("KotlinByteIterator")))
@interface KottageKotlinByteIterator : KottageBase <KottageKotlinIterator>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (KottageByte *)next __attribute__((swift_name("next()")));
- (int8_t)nextByte __attribute__((swift_name("nextByte()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol KottageKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<KottageKotlinKClass>)kClass provider:(id<KottageKotlinx_serialization_coreKSerializer> (^)(NSArray<id<KottageKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<KottageKotlinKClass>)kClass serializer:(id<KottageKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<KottageKotlinKClass>)baseClass actualClass:(id<KottageKotlinKClass>)actualClass actualSerializer:(id<KottageKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<KottageKotlinKClass>)baseClass defaultDeserializerProvider:(id<KottageKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<KottageKotlinKClass>)baseClass defaultDeserializerProvider:(id<KottageKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<KottageKotlinKClass>)baseClass defaultSerializerProvider:(id<KottageKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol KottageKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol KottageKotlinKClass <KottageKotlinKDeclarationContainer, KottageKotlinKAnnotatedElement, KottageKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_jsonJsonElement.Companion")))
@interface KottageKotlinx_serialization_jsonJsonElementCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinx_serialization_jsonJsonElementCompanion *shared __attribute__((swift_name("shared")));
- (id<KottageKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKVariance")))
@interface KottageKotlinKVariance : KottageKotlinEnum<KottageKotlinKVariance *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) KottageKotlinKVariance *invariant __attribute__((swift_name("invariant")));
@property (class, readonly) KottageKotlinKVariance *in __attribute__((swift_name("in")));
@property (class, readonly) KottageKotlinKVariance *out __attribute__((swift_name("out")));
+ (KottageKotlinArray<KottageKotlinKVariance *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinKTypeProjection.Companion")))
@interface KottageKotlinKTypeProjectionCompanion : KottageBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) KottageKotlinKTypeProjectionCompanion *shared __attribute__((swift_name("shared")));
- (KottageKotlinKTypeProjection *)contravariantType:(id<KottageKotlinKType>)type __attribute__((swift_name("contravariant(type:)")));
- (KottageKotlinKTypeProjection *)covariantType:(id<KottageKotlinKType>)type __attribute__((swift_name("covariant(type:)")));
- (KottageKotlinKTypeProjection *)invariantType:(id<KottageKotlinKType>)type __attribute__((swift_name("invariant(type:)")));
@property (readonly) KottageKotlinKTypeProjection *STAR __attribute__((swift_name("STAR")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol KottageKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<KottageKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<KottageKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol KottageKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface KottageKotlinx_serialization_coreSerialKind : KottageBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol KottageKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<KottageKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<KottageKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<KottageKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) KottageKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface KottageKotlinNothing : KottageBase
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
