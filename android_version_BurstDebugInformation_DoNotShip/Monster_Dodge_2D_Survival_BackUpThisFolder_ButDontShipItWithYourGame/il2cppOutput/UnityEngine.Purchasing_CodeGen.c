﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.Purchasing.AnalyticsAdapter::.ctor(Unity.Services.Analytics.IAnalyticsService)
extern void AnalyticsAdapter__ctor_mA9811522B1D76E182218030B5ECFFC002127239A (void);
// 0x00000002 System.Void UnityEngine.Purchasing.AnalyticsAdapter::SendTransactionEvent(UnityEngine.Purchasing.Product)
extern void AnalyticsAdapter_SendTransactionEvent_m3D4EC01C181040995ECF157F640DFCBC7AD8A113 (void);
// 0x00000003 Unity.Services.Analytics.TransactionParameters UnityEngine.Purchasing.AnalyticsAdapter::BuildTransactionParameters(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.UnifiedReceipt,UnityEngine.Purchasing.AnalyticsTransactionReceipt)
extern void AnalyticsAdapter_BuildTransactionParameters_mF5F1F96933FDD4F6695C63FFA21D9EECD37FF3D4 (void);
// 0x00000004 System.Void UnityEngine.Purchasing.AnalyticsAdapter::SendTransactionFailedEvent(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern void AnalyticsAdapter_SendTransactionFailedEvent_m89C1635A1E1D695BDCBFC63F0CB8821371821736 (void);
// 0x00000005 Unity.Services.Analytics.TransactionFailedParameters UnityEngine.Purchasing.AnalyticsAdapter::BuildTransactionFailedParameters(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern void AnalyticsAdapter_BuildTransactionFailedParameters_m9C7BC83953534BD49409C0D501573219966F4B76 (void);
// 0x00000006 Unity.Services.Analytics.Product UnityEngine.Purchasing.AnalyticsAdapter::GenerateItemReceivedForPurchase(UnityEngine.Purchasing.Product)
extern void AnalyticsAdapter_GenerateItemReceivedForPurchase_m9BFE5ED851537501F2F26D4D33B148DEED30C156 (void);
// 0x00000007 Unity.Services.Analytics.Product UnityEngine.Purchasing.AnalyticsAdapter::GenerateRealCurrencySpentOnPurchase(UnityEngine.Purchasing.Product)
extern void AnalyticsAdapter_GenerateRealCurrencySpentOnPurchase_m3785225DD68D7697A2C76C976D097D3DB261A757 (void);
// 0x00000008 System.Int64 UnityEngine.Purchasing.AnalyticsAdapter::ExtractRealCurrencyAmount(UnityEngine.Purchasing.Product)
extern void AnalyticsAdapter_ExtractRealCurrencyAmount_mF9EFD2DB1F3CAE23DC11CEB2244B68921A3214F0 (void);
// 0x00000009 System.Void UnityEngine.Purchasing.AnalyticsClient::.ctor(UnityEngine.Purchasing.IAnalyticsAdapter,UnityEngine.Purchasing.IAnalyticsAdapter)
extern void AnalyticsClient__ctor_m2B3BC8C9E0F2DEACBF520EA2CCBF1EA84086B6F5 (void);
// 0x0000000A System.Void UnityEngine.Purchasing.AnalyticsClient::OnPurchaseSucceeded(UnityEngine.Purchasing.Product)
extern void AnalyticsClient_OnPurchaseSucceeded_mCFFD1B7949BA389232D3A91ADAFE4F79C0C371F5 (void);
// 0x0000000B System.Void UnityEngine.Purchasing.AnalyticsClient::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern void AnalyticsClient_OnPurchaseFailed_m7C66BEECECBE60BBEE4E8ECE6B6715505AD7B677 (void);
// 0x0000000C System.Void UnityEngine.Purchasing.EmptyAnalyticsAdapter::SendTransactionEvent(UnityEngine.Purchasing.Product)
extern void EmptyAnalyticsAdapter_SendTransactionEvent_mEDEA0D1DFF43AEE74D65C92D009FB876122265A0 (void);
// 0x0000000D System.Void UnityEngine.Purchasing.EmptyAnalyticsAdapter::SendTransactionFailedEvent(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern void EmptyAnalyticsAdapter_SendTransactionFailedEvent_m8081DC5AC84DADC879809BF0BC13ECD970473679 (void);
// 0x0000000E System.Void UnityEngine.Purchasing.EmptyAnalyticsAdapter::.ctor()
extern void EmptyAnalyticsAdapter__ctor_mB21F9FF9DC48E1FDE247FE9BC82DE1FA37DF01DD (void);
// 0x0000000F System.Void UnityEngine.Purchasing.IAnalyticsAdapter::SendTransactionEvent(UnityEngine.Purchasing.Product)
// 0x00000010 System.Void UnityEngine.Purchasing.IAnalyticsAdapter::SendTransactionFailedEvent(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
// 0x00000011 System.Void UnityEngine.Purchasing.IAnalyticsClient::OnPurchaseSucceeded(UnityEngine.Purchasing.Product)
// 0x00000012 System.Void UnityEngine.Purchasing.IAnalyticsClient::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
// 0x00000013 System.Void UnityEngine.Purchasing.ILegacyUnityAnalytics::SendTransactionEvent(System.String,System.Decimal,System.String,System.String,System.String)
// 0x00000014 System.Void UnityEngine.Purchasing.ILegacyUnityAnalytics::SendCustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
// 0x00000015 System.Void UnityEngine.Purchasing.LegacyAnalyticsAdapter::.ctor(UnityEngine.Purchasing.ILegacyUnityAnalytics)
extern void LegacyAnalyticsAdapter__ctor_m22B82E810F5664ADFF89121DA730F6F5615B34CB (void);
// 0x00000016 System.Void UnityEngine.Purchasing.LegacyAnalyticsAdapter::SendTransactionEvent(UnityEngine.Purchasing.Product)
extern void LegacyAnalyticsAdapter_SendTransactionEvent_m7956A04A967B9807E8720BD46279CDDE168A6009 (void);
// 0x00000017 System.Void UnityEngine.Purchasing.LegacyAnalyticsAdapter::SendTransactionFailedEvent(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern void LegacyAnalyticsAdapter_SendTransactionFailedEvent_m8A937D1819A3FC11EB73A683B47D455B2F7B4619 (void);
// 0x00000018 System.Void UnityEngine.Purchasing.LegacyUnityAnalytics::SendTransactionEvent(System.String,System.Decimal,System.String,System.String,System.String)
extern void LegacyUnityAnalytics_SendTransactionEvent_m3ED76A12528E91922A0C6926F8F08CCA2E1D2374 (void);
// 0x00000019 System.Void UnityEngine.Purchasing.LegacyUnityAnalytics::SendCustomEvent(System.String,System.Collections.Generic.Dictionary`2<System.String,System.Object>)
extern void LegacyUnityAnalytics_SendCustomEvent_m76C25E99FB209FDFFD5C8121B3AE90FF72512158 (void);
// 0x0000001A System.Void UnityEngine.Purchasing.LegacyUnityAnalytics::.ctor()
extern void LegacyUnityAnalytics__ctor_mE3A3146AB2D7FA1BC66A86BE4B5D35396F0950CD (void);
// 0x0000001B System.String UnityEngine.Purchasing.AnalyticsTransactionReceipt::get_transactionReceipt()
extern void AnalyticsTransactionReceipt_get_transactionReceipt_m861E8487CD45E0D8FB3123F7407F482498B02BA5 (void);
// 0x0000001C System.Void UnityEngine.Purchasing.AnalyticsTransactionReceipt::set_transactionReceipt(System.String)
extern void AnalyticsTransactionReceipt_set_transactionReceipt_m9B77E89AD20AFB3C5045D3AEBF3263DDDBC62B50 (void);
// 0x0000001D System.String UnityEngine.Purchasing.AnalyticsTransactionReceipt::get_transactionReceiptSignature()
extern void AnalyticsTransactionReceipt_get_transactionReceiptSignature_m74243C5F3141D6A13B8BF78CFEAAC2D6C4294D50 (void);
// 0x0000001E System.Void UnityEngine.Purchasing.AnalyticsTransactionReceipt::set_transactionReceiptSignature(System.String)
extern void AnalyticsTransactionReceipt_set_transactionReceiptSignature_m2F889BFABCFA2B966FC08B124E5EB2B8C0B3A593 (void);
// 0x0000001F System.Nullable`1<Unity.Services.Analytics.TransactionServer> UnityEngine.Purchasing.AnalyticsTransactionReceipt::get_transactionServer()
extern void AnalyticsTransactionReceipt_get_transactionServer_mF1786E391CFDAFF6EDF27CB16FC7C8D25D01E8C3 (void);
// 0x00000020 System.Void UnityEngine.Purchasing.AnalyticsTransactionReceipt::set_transactionServer(System.Nullable`1<Unity.Services.Analytics.TransactionServer>)
extern void AnalyticsTransactionReceipt_set_transactionServer_mB9E6FC530A9084ABA7009503580193814D404F47 (void);
// 0x00000021 System.Void UnityEngine.Purchasing.AnalyticsTransactionReceipt::.ctor()
extern void AnalyticsTransactionReceipt__ctor_m1A1182A422E4C72B5AF1168D1CF6C500DEE9B900 (void);
// 0x00000022 System.Void UnityEngine.Purchasing.GoogleReceipt::.ctor()
extern void GoogleReceipt__ctor_mAE8CC3A37D0C8C555E1173E62C6487909EDE1DEC (void);
// 0x00000023 System.Collections.IEnumerator UnityEngine.Purchasing.IDs::System.Collections.IEnumerable.GetEnumerator()
extern void IDs_System_Collections_IEnumerable_GetEnumerator_m69304DD3D56D46873ADC31B8CA1B542A48BFD4E9 (void);
// 0x00000024 System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.String[])
extern void IDs_Add_m84DA48DEDD7208CAB754B9DEB36B56D0D8A22AF4 (void);
// 0x00000025 System.Void UnityEngine.Purchasing.IDs::Add(System.String,System.Object[])
extern void IDs_Add_m90A7A1E587CF67C55574ABC3C3371F4037F63D3C (void);
// 0x00000026 System.String UnityEngine.Purchasing.IDs::SpecificIDForStore(System.String,System.String)
extern void IDs_SpecificIDForStore_m7C06241E6A1BC984ABE2964028391176C507D9CF (void);
// 0x00000027 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>> UnityEngine.Purchasing.IDs::GetEnumerator()
extern void IDs_GetEnumerator_mAF7B76FEBF6BA41FC5D276810232AA0C752C00A0 (void);
// 0x00000028 System.Void UnityEngine.Purchasing.IDs::.ctor()
extern void IDs__ctor_m6C335BDBF3A2649C4050BD8958BAEF1AC74EEB06 (void);
// 0x00000029 System.Void UnityEngine.Purchasing.ConfigurationBuilder::.ctor(UnityEngine.Purchasing.PurchasingFactory)
extern void ConfigurationBuilder__ctor_m90B3A0F2A86E48CE359A7645A587EACB43E0AFF2 (void);
// 0x0000002A System.Boolean UnityEngine.Purchasing.ConfigurationBuilder::get_useCatalogProvider()
extern void ConfigurationBuilder_get_useCatalogProvider_m91A7BC2D3B3C3C13DF77F8CA628820587F1FE99C (void);
// 0x0000002B System.Void UnityEngine.Purchasing.ConfigurationBuilder::set_useCatalogProvider(System.Boolean)
extern void ConfigurationBuilder_set_useCatalogProvider_m93DE2B7E470A16832039B64C682C0DF44042E1C0 (void);
// 0x0000002C System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition> UnityEngine.Purchasing.ConfigurationBuilder::get_products()
extern void ConfigurationBuilder_get_products_m58DC9D24139168ED98A7B444EE7C10248857FB80 (void);
// 0x0000002D UnityEngine.Purchasing.PurchasingFactory UnityEngine.Purchasing.ConfigurationBuilder::get_factory()
extern void ConfigurationBuilder_get_factory_mEE2B11F372E146204E1DC9217E30587F2185F9A5 (void);
// 0x0000002E T UnityEngine.Purchasing.ConfigurationBuilder::Configure()
// 0x0000002F UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::Instance(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern void ConfigurationBuilder_Instance_mB6F4C9969C39F797F8D3CE9A0973264080F19FC3 (void);
// 0x00000030 UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType)
extern void ConfigurationBuilder_AddProduct_m5185C9211186D4C7D0434CE373E38E76F57BD212 (void);
// 0x00000031 UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs)
extern void ConfigurationBuilder_AddProduct_mC3646988D3D2629C6EF3C67D149989226121C95F (void);
// 0x00000032 UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,UnityEngine.Purchasing.PayoutDefinition)
extern void ConfigurationBuilder_AddProduct_m051EB32EE6B3CF1813AFCFC3B330707E5E3AAB03 (void);
// 0x00000033 UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProduct(System.String,UnityEngine.Purchasing.ProductType,UnityEngine.Purchasing.IDs,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern void ConfigurationBuilder_AddProduct_m6799057993FE410B9ACF1D975D7A154EAF9F70AA (void);
// 0x00000034 UnityEngine.Purchasing.ConfigurationBuilder UnityEngine.Purchasing.ConfigurationBuilder::AddProducts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.ProductDefinition>)
extern void ConfigurationBuilder_AddProducts_m6532195ED360206EE96F4CDB4668F4604331CFD2 (void);
// 0x00000035 System.Void UnityEngine.Purchasing.IUnityServicesInitializationChecker::CheckAndLogWarning()
// 0x00000036 System.Void UnityEngine.Purchasing.UnityServicesInitializationChecker::.ctor(UnityEngine.ILogger)
extern void UnityServicesInitializationChecker__ctor_m6D7C8363F62522F5BDE5FEC5872101B6F77AA180 (void);
// 0x00000037 System.Void UnityEngine.Purchasing.UnityServicesInitializationChecker::CheckAndLogWarning()
extern void UnityServicesInitializationChecker_CheckAndLogWarning_m3BB4063AA451AE65B2DA95C7648B627FB9B9C89D (void);
// 0x00000038 System.Boolean UnityEngine.Purchasing.UnityServicesInitializationChecker::IsUninitialized()
extern void UnityServicesInitializationChecker_IsUninitialized_mB237D675B93E61EEBB2C4ADD2ED8022CA36556C3 (void);
// 0x00000039 System.Void UnityEngine.Purchasing.UnityServicesInitializationChecker::LogWarning()
extern void UnityServicesInitializationChecker_LogWarning_m3E8B0FFEA46514A0A8306701DF12B26B46C4A76C (void);
// 0x0000003A T UnityEngine.Purchasing.IExtensionProvider::GetExtension()
// 0x0000003B System.Void UnityEngine.Purchasing.IInternalStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
// 0x0000003C UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IInternalStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
// 0x0000003D System.Void UnityEngine.Purchasing.IInternalStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
// 0x0000003E System.Void UnityEngine.Purchasing.IInternalStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController)
// 0x0000003F UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.IStoreController::get_products()
// 0x00000040 System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(UnityEngine.Purchasing.Product,System.String)
// 0x00000041 System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String,System.String)
// 0x00000042 System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(UnityEngine.Purchasing.Product)
// 0x00000043 System.Void UnityEngine.Purchasing.IStoreController::InitiatePurchase(System.String)
// 0x00000044 System.Void UnityEngine.Purchasing.IStoreController::FetchAdditionalProducts(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>,System.Action,System.Action`1<UnityEngine.Purchasing.InitializationFailureReason>)
// 0x00000045 System.Void UnityEngine.Purchasing.IStoreController::ConfirmPendingPurchase(UnityEngine.Purchasing.Product)
// 0x00000046 System.Void UnityEngine.Purchasing.IStoreListener::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
// 0x00000047 UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.IStoreListener::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
// 0x00000048 System.Void UnityEngine.Purchasing.IStoreListener::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
// 0x00000049 System.Void UnityEngine.Purchasing.IStoreListener::OnInitialized(UnityEngine.Purchasing.IStoreController,UnityEngine.Purchasing.IExtensionProvider)
// 0x0000004A UnityEngine.Purchasing.PayoutType UnityEngine.Purchasing.PayoutDefinition::get_type()
extern void PayoutDefinition_get_type_m11101EC785AEA16001D5BB6567FBBB53347718DF (void);
// 0x0000004B System.Void UnityEngine.Purchasing.PayoutDefinition::set_type(UnityEngine.Purchasing.PayoutType)
extern void PayoutDefinition_set_type_m96F9824AC43A87F2A79B06BACF6FC91BDD9A0160 (void);
// 0x0000004C System.String UnityEngine.Purchasing.PayoutDefinition::get_typeString()
extern void PayoutDefinition_get_typeString_m60D95898428D6CA6FD545294994872FE902014A9 (void);
// 0x0000004D System.String UnityEngine.Purchasing.PayoutDefinition::get_subtype()
extern void PayoutDefinition_get_subtype_m79D69CA15666B45F355FE4C8970A73F9F4DDC6F4 (void);
// 0x0000004E System.Void UnityEngine.Purchasing.PayoutDefinition::set_subtype(System.String)
extern void PayoutDefinition_set_subtype_mFC69080C95C36ACCE0F32AB227096463405D9BE8 (void);
// 0x0000004F System.Double UnityEngine.Purchasing.PayoutDefinition::get_quantity()
extern void PayoutDefinition_get_quantity_m78BB20B82394B1E637B5B24BD3C64303D74C3708 (void);
// 0x00000050 System.Void UnityEngine.Purchasing.PayoutDefinition::set_quantity(System.Double)
extern void PayoutDefinition_set_quantity_mFAB711E82E14281F591C0B6C9456953CDE4A0796 (void);
// 0x00000051 System.String UnityEngine.Purchasing.PayoutDefinition::get_data()
extern void PayoutDefinition_get_data_m5D499A15579A95597C88C513634DCCD2DA976FF5 (void);
// 0x00000052 System.Void UnityEngine.Purchasing.PayoutDefinition::set_data(System.String)
extern void PayoutDefinition_set_data_m4EF94B096C46902E3D7E4F06A10BA01B23CE60CE (void);
// 0x00000053 System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor()
extern void PayoutDefinition__ctor_m80879883C96E2AFD35E01E35F3172DACFCE31C88 (void);
// 0x00000054 System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.String,System.Double)
extern void PayoutDefinition__ctor_m6773DDEA112FF71D665AEFBA07FE3758BEEDDC79 (void);
// 0x00000055 System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.String,System.Double,System.String)
extern void PayoutDefinition__ctor_m28968555D4C084806CF43AC45E53DFAE49F741D1 (void);
// 0x00000056 System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.Double)
extern void PayoutDefinition__ctor_m3E05C8A0F7D706A5C077679184A3DE8EA8739599 (void);
// 0x00000057 System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(System.String,System.Double,System.String)
extern void PayoutDefinition__ctor_mFFA9D7E1ED1490F73F119591C7BFED6D8520A0B7 (void);
// 0x00000058 System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(UnityEngine.Purchasing.PayoutType,System.String,System.Double)
extern void PayoutDefinition__ctor_mC8191B390FCA55AFACE79A7A1FA50BF780F3AD62 (void);
// 0x00000059 System.Void UnityEngine.Purchasing.PayoutDefinition::.ctor(UnityEngine.Purchasing.PayoutType,System.String,System.Double,System.String)
extern void PayoutDefinition__ctor_mAC74067DF2E1DDB5139EF894AABAD7C4B1D8DF45 (void);
// 0x0000005A System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata,System.String)
extern void Product__ctor_mEA754DD7DD9CA3D6C4A75885167EDAF2EEE14887 (void);
// 0x0000005B System.Void UnityEngine.Purchasing.Product::.ctor(UnityEngine.Purchasing.ProductDefinition,UnityEngine.Purchasing.ProductMetadata)
extern void Product__ctor_mFD05003961781DF08C9B104D19211C1DF217CAFC (void);
// 0x0000005C UnityEngine.Purchasing.ProductDefinition UnityEngine.Purchasing.Product::get_definition()
extern void Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873 (void);
// 0x0000005D System.Void UnityEngine.Purchasing.Product::set_definition(UnityEngine.Purchasing.ProductDefinition)
extern void Product_set_definition_mECBF1BA93CC08DE779DF581510FC1A6331EDD251 (void);
// 0x0000005E UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Product::get_metadata()
extern void Product_get_metadata_mBACF5289A29D76CEB98A1CABD406840B8E4DF5C6 (void);
// 0x0000005F System.Void UnityEngine.Purchasing.Product::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern void Product_set_metadata_m4BD030ED64A65BF5028BF22B429808E27B8AD168 (void);
// 0x00000060 System.Boolean UnityEngine.Purchasing.Product::get_availableToPurchase()
extern void Product_get_availableToPurchase_m51BC3BC202FC9C961C758BFB56C541B5B22270D1 (void);
// 0x00000061 System.Void UnityEngine.Purchasing.Product::set_availableToPurchase(System.Boolean)
extern void Product_set_availableToPurchase_m8EBEF1A8429295BA48E4D7D6C951DE06D34B79A7 (void);
// 0x00000062 System.String UnityEngine.Purchasing.Product::get_transactionID()
extern void Product_get_transactionID_mDD04B32BEAECE064FBED1C4BF325D36E8D9B591D (void);
// 0x00000063 System.Void UnityEngine.Purchasing.Product::set_transactionID(System.String)
extern void Product_set_transactionID_m9225097DF50CC23D6161CE94FD192027D94C1207 (void);
// 0x00000064 System.Boolean UnityEngine.Purchasing.Product::get_hasReceipt()
extern void Product_get_hasReceipt_m49FC7D56357278133CF9B58420C0F9EC897BEBC2 (void);
// 0x00000065 System.String UnityEngine.Purchasing.Product::get_receipt()
extern void Product_get_receipt_m0C80E1794DD8A8F287F752B00188679B109BCAFA (void);
// 0x00000066 System.Void UnityEngine.Purchasing.Product::set_receipt(System.String)
extern void Product_set_receipt_m2371F87ED179759A9D88C2156CBC6AC658605F51 (void);
// 0x00000067 System.Boolean UnityEngine.Purchasing.Product::Equals(System.Object)
extern void Product_Equals_m96D836E7415504474C005A75A8A259D6E50403B2 (void);
// 0x00000068 System.Int32 UnityEngine.Purchasing.Product::GetHashCode()
extern void Product_GetHashCode_m5C9D67CE70612F75123E365C99E5E67E6DC6DE90 (void);
// 0x00000069 System.Void UnityEngine.Purchasing.ProductCollection::.ctor(UnityEngine.Purchasing.Product[])
extern void ProductCollection__ctor_mA496B6F15279D8D310CB2DA67EE9F51491FD31B7 (void);
// 0x0000006A System.Void UnityEngine.Purchasing.ProductCollection::AddProducts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.Product>)
extern void ProductCollection_AddProducts_m7F6C13CEB5F1B743CE4524E9878A47F9B12F22F8 (void);
// 0x0000006B System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.Product> UnityEngine.Purchasing.ProductCollection::get_set()
extern void ProductCollection_get_set_m5F30331F9C5AF536F4ED8B193D7B1022DDEDD7BE (void);
// 0x0000006C UnityEngine.Purchasing.Product[] UnityEngine.Purchasing.ProductCollection::get_all()
extern void ProductCollection_get_all_m37D0E42451E883AAD88D44E70F5B2D5E56763ED7 (void);
// 0x0000006D UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithID(System.String)
extern void ProductCollection_WithID_m823B1BBFE1B1A91B7AA2E2BDD821F0D24F0C5543 (void);
// 0x0000006E UnityEngine.Purchasing.Product UnityEngine.Purchasing.ProductCollection::WithStoreSpecificID(System.String)
extern void ProductCollection_WithStoreSpecificID_mD2C0170E4A8F41D2F3E96163B46009A676B9E830 (void);
// 0x0000006F System.Void UnityEngine.Purchasing.ProductCollection/<>c::.cctor()
extern void U3CU3Ec__cctor_m46883A38CE1604503FA2AE96355D825DC78BB12E (void);
// 0x00000070 System.Void UnityEngine.Purchasing.ProductCollection/<>c::.ctor()
extern void U3CU3Ec__ctor_m0909335C607F7D3D46285097177F2DFA466A7503 (void);
// 0x00000071 System.String UnityEngine.Purchasing.ProductCollection/<>c::<AddProducts>b__5_0(UnityEngine.Purchasing.Product)
extern void U3CU3Ec_U3CAddProductsU3Eb__5_0_m449C6AEE054BC2B2ED35D1AA5FD871B0CEC0FB6B (void);
// 0x00000072 System.String UnityEngine.Purchasing.ProductCollection/<>c::<AddProducts>b__5_1(UnityEngine.Purchasing.Product)
extern void U3CU3Ec_U3CAddProductsU3Eb__5_1_m84302261302220B01F5437AB80F9FFCA847657CF (void);
// 0x00000073 System.Void UnityEngine.Purchasing.ProductDefinition::.ctor()
extern void ProductDefinition__ctor_m27D3DFF4B34CE17FF3354CFA89379012213CA64B (void);
// 0x00000074 System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType)
extern void ProductDefinition__ctor_m11578282A2F709573A7BE6A5790BA2CF5969B792 (void);
// 0x00000075 System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean)
extern void ProductDefinition__ctor_mE7C536B6F4985FACFD05B872D0B609F4427F359C (void);
// 0x00000076 System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean,UnityEngine.Purchasing.PayoutDefinition)
extern void ProductDefinition__ctor_m9386926115DEEC6B27AB741430C7A0C34DBC32BB (void);
// 0x00000077 System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,System.String,UnityEngine.Purchasing.ProductType,System.Boolean,System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern void ProductDefinition__ctor_m79F115614454B4DAAB2662D5E9D1976B92B427E7 (void);
// 0x00000078 System.Void UnityEngine.Purchasing.ProductDefinition::.ctor(System.String,UnityEngine.Purchasing.ProductType)
extern void ProductDefinition__ctor_m4691927A374B5BD09A7A0BB4A7204873AEF8A1D0 (void);
// 0x00000079 System.String UnityEngine.Purchasing.ProductDefinition::get_id()
extern void ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B (void);
// 0x0000007A System.Void UnityEngine.Purchasing.ProductDefinition::set_id(System.String)
extern void ProductDefinition_set_id_m0BCFB65A2FE120D34D84C0499DF7343EB914C076 (void);
// 0x0000007B System.String UnityEngine.Purchasing.ProductDefinition::get_storeSpecificId()
extern void ProductDefinition_get_storeSpecificId_mEB2CB96C5CD753F11A4DF85F3C7B930110962E36 (void);
// 0x0000007C System.Void UnityEngine.Purchasing.ProductDefinition::set_storeSpecificId(System.String)
extern void ProductDefinition_set_storeSpecificId_m6EE4EEB44943F320E2FBFE7E245E54BEC6AE4833 (void);
// 0x0000007D UnityEngine.Purchasing.ProductType UnityEngine.Purchasing.ProductDefinition::get_type()
extern void ProductDefinition_get_type_m66F4D4D03E3A6B95FD6F312EBACE07FA1B8E18E7 (void);
// 0x0000007E System.Void UnityEngine.Purchasing.ProductDefinition::set_type(UnityEngine.Purchasing.ProductType)
extern void ProductDefinition_set_type_m625D8C9A03FB86B278F09CD89F38FB59317BCEDD (void);
// 0x0000007F System.Boolean UnityEngine.Purchasing.ProductDefinition::get_enabled()
extern void ProductDefinition_get_enabled_mCD39A6B3B60AB571102878818EB9B1087AE90EEB (void);
// 0x00000080 System.Void UnityEngine.Purchasing.ProductDefinition::set_enabled(System.Boolean)
extern void ProductDefinition_set_enabled_m6A46D2C099819122BA0576167BAF4F06D490E3D4 (void);
// 0x00000081 System.Boolean UnityEngine.Purchasing.ProductDefinition::Equals(System.Object)
extern void ProductDefinition_Equals_mBD26EEFE03AE48087AF391045CC209057066182C (void);
// 0x00000082 System.Int32 UnityEngine.Purchasing.ProductDefinition::GetHashCode()
extern void ProductDefinition_GetHashCode_mED5C0080546594104C5090C4B0077CB03ABBE0F5 (void);
// 0x00000083 System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition> UnityEngine.Purchasing.ProductDefinition::get_payouts()
extern void ProductDefinition_get_payouts_m8DB79B43B18FF1AB41BEEAB7F393596AC1733AB7 (void);
// 0x00000084 UnityEngine.Purchasing.PayoutDefinition UnityEngine.Purchasing.ProductDefinition::get_payout()
extern void ProductDefinition_get_payout_m408A5D78A3132B65F873155775D19989E356A468 (void);
// 0x00000085 System.Void UnityEngine.Purchasing.ProductDefinition::SetPayouts(System.Collections.Generic.IEnumerable`1<UnityEngine.Purchasing.PayoutDefinition>)
extern void ProductDefinition_SetPayouts_m1F07A4AEC2E899444B24A07A7B0524F3843A10C5 (void);
// 0x00000086 System.Void UnityEngine.Purchasing.ProductMetadata::.ctor(System.String,System.String,System.String,System.String,System.Decimal)
extern void ProductMetadata__ctor_m602D2E51F4C49CD17EDB6F57374A6D4968E606F5 (void);
// 0x00000087 System.Void UnityEngine.Purchasing.ProductMetadata::.ctor()
extern void ProductMetadata__ctor_m4D1901A5E816329D3702B6833F1882DA67647686 (void);
// 0x00000088 System.String UnityEngine.Purchasing.ProductMetadata::get_localizedPriceString()
extern void ProductMetadata_get_localizedPriceString_m83C55E96B4BC39284D88F9BAAC64E60DFF7D408F (void);
// 0x00000089 System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPriceString(System.String)
extern void ProductMetadata_set_localizedPriceString_m26F6D7C900296E0BF10458BE90D1F866AAF74F94 (void);
// 0x0000008A System.String UnityEngine.Purchasing.ProductMetadata::get_localizedTitle()
extern void ProductMetadata_get_localizedTitle_mBD34BFB3B5913154B4ACBC630A4DF8A664C9E258 (void);
// 0x0000008B System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedTitle(System.String)
extern void ProductMetadata_set_localizedTitle_m818CA419C28B75AECD1FCA7F69F94A126BBBE424 (void);
// 0x0000008C System.String UnityEngine.Purchasing.ProductMetadata::get_localizedDescription()
extern void ProductMetadata_get_localizedDescription_mF1507A605C357667ED05FAC2F486D527CA4E2887 (void);
// 0x0000008D System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedDescription(System.String)
extern void ProductMetadata_set_localizedDescription_mB97AD70090BD48FA8AD0D9777E7AD45C55CEF110 (void);
// 0x0000008E System.String UnityEngine.Purchasing.ProductMetadata::get_isoCurrencyCode()
extern void ProductMetadata_get_isoCurrencyCode_mB14AD35EB399B34140F8497A96B678F719048FCC (void);
// 0x0000008F System.Void UnityEngine.Purchasing.ProductMetadata::set_isoCurrencyCode(System.String)
extern void ProductMetadata_set_isoCurrencyCode_m0443604C3F39BDF6CC4D1605667AC5EA20B6FC23 (void);
// 0x00000090 System.Decimal UnityEngine.Purchasing.ProductMetadata::get_localizedPrice()
extern void ProductMetadata_get_localizedPrice_m265DB58694A71F4608AE2A376B40037D75CB69B9 (void);
// 0x00000091 System.Void UnityEngine.Purchasing.ProductMetadata::set_localizedPrice(System.Decimal)
extern void ProductMetadata_set_localizedPrice_m2B056F63E433DFE43E00E1ACC113C2A9ABF357E5 (void);
// 0x00000092 System.Void UnityEngine.Purchasing.PurchaseEventArgs::.ctor(UnityEngine.Purchasing.Product)
extern void PurchaseEventArgs__ctor_m23F65E3572BA3903FC0362B332D12E4F83715167 (void);
// 0x00000093 UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseEventArgs::get_purchasedProduct()
extern void PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56 (void);
// 0x00000094 System.Void UnityEngine.Purchasing.PurchaseEventArgs::set_purchasedProduct(UnityEngine.Purchasing.Product)
extern void PurchaseEventArgs_set_purchasedProduct_m341BFA6C75A1DE33A7F1B2B2FCA8579F670B1BB5 (void);
// 0x00000095 System.Void UnityEngine.Purchasing.PurchaseFailedEventArgs::.ctor(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
extern void PurchaseFailedEventArgs__ctor_m5AC7F1B6997ECA2A043B1C461C7A1D96B7AEC4D8 (void);
// 0x00000096 UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchaseFailedEventArgs::get_purchasedProduct()
extern void PurchaseFailedEventArgs_get_purchasedProduct_m3214F99E07C67771D1A1692645716ABFB448B021 (void);
// 0x00000097 System.Void UnityEngine.Purchasing.PurchaseFailedEventArgs::set_purchasedProduct(UnityEngine.Purchasing.Product)
extern void PurchaseFailedEventArgs_set_purchasedProduct_mD8D4509A71790CA18C1F725E46FC2E1545C4C5E8 (void);
// 0x00000098 UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.PurchaseFailedEventArgs::get_reason()
extern void PurchaseFailedEventArgs_get_reason_m10603492C96A24512746AF962AFB4DFEE42E59A1 (void);
// 0x00000099 System.Void UnityEngine.Purchasing.PurchaseFailedEventArgs::set_reason(UnityEngine.Purchasing.PurchaseFailureReason)
extern void PurchaseFailedEventArgs_set_reason_m04963B2107F112D6F573EBF54A6EA61C002EE08A (void);
// 0x0000009A System.String UnityEngine.Purchasing.PurchaseFailedEventArgs::get_message()
extern void PurchaseFailedEventArgs_get_message_m3A62AF2B88EDABE5DC25C059454D6E4404233613 (void);
// 0x0000009B System.Void UnityEngine.Purchasing.PurchaseFailedEventArgs::set_message(System.String)
extern void PurchaseFailedEventArgs_set_message_m446F027B97630930B2804855A32195BD84E4DAEE (void);
// 0x0000009C System.Void UnityEngine.Purchasing.PurchasingFactory::.ctor(UnityEngine.Purchasing.Extension.IPurchasingModule,UnityEngine.Purchasing.Extension.IPurchasingModule[])
extern void PurchasingFactory__ctor_m1459FC5C1EB02676DF5DDBDE5D8CBF12ABBFB530 (void);
// 0x0000009D System.String UnityEngine.Purchasing.PurchasingFactory::get_storeName()
extern void PurchasingFactory_get_storeName_m90F704A0005078440D884F0179E2DD69CD845532 (void);
// 0x0000009E System.Void UnityEngine.Purchasing.PurchasingFactory::set_storeName(System.String)
extern void PurchasingFactory_set_storeName_mA1F9148E935D0928CB82A00DAD44071AECB9C0D1 (void);
// 0x0000009F UnityEngine.Purchasing.Extension.IStore UnityEngine.Purchasing.PurchasingFactory::get_service()
extern void PurchasingFactory_get_service_mF812B5981F40344A38958D66863F100BA9CEFAFA (void);
// 0x000000A0 System.Void UnityEngine.Purchasing.PurchasingFactory::set_service(UnityEngine.Purchasing.Extension.IStore)
extern void PurchasingFactory_set_service_mA5DCE97087B8F6E93980B3F5A620FA3251322B85 (void);
// 0x000000A1 System.Void UnityEngine.Purchasing.PurchasingFactory::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore)
extern void PurchasingFactory_RegisterStore_mFA05E65120EA84AF5D65B912F30EDB0BAF190B96 (void);
// 0x000000A2 System.Void UnityEngine.Purchasing.PurchasingFactory::RegisterExtension(T)
// 0x000000A3 System.Void UnityEngine.Purchasing.PurchasingFactory::RegisterConfiguration(T)
// 0x000000A4 T UnityEngine.Purchasing.PurchasingFactory::GetConfig()
// 0x000000A5 T UnityEngine.Purchasing.PurchasingFactory::GetExtension()
// 0x000000A6 System.Void UnityEngine.Purchasing.PurchasingFactory::SetCatalogProvider(UnityEngine.Purchasing.Extension.ICatalogProvider)
extern void PurchasingFactory_SetCatalogProvider_mF2A3349C09C7E1979163DB6F6A5008BA7537B024 (void);
// 0x000000A7 System.Void UnityEngine.Purchasing.PurchasingFactory::SetCatalogProviderFunction(System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>)
extern void PurchasingFactory_SetCatalogProviderFunction_m016619C10241A678931DB122D78005F9F877C4CE (void);
// 0x000000A8 UnityEngine.Purchasing.Extension.ICatalogProvider UnityEngine.Purchasing.PurchasingFactory::GetCatalogProvider()
extern void PurchasingFactory_GetCatalogProvider_mF6F64C5D260A60653D171947B8DB6A7F4E922F56 (void);
// 0x000000A9 System.Boolean UnityEngine.Purchasing.PurchasingManager::get_useTransactionLog()
extern void PurchasingManager_get_useTransactionLog_m2788EF6477AD0E5BA9A982D0774483E1DD8E88F1 (void);
// 0x000000AA System.Void UnityEngine.Purchasing.PurchasingManager::set_useTransactionLog(System.Boolean)
extern void PurchasingManager_set_useTransactionLog_m7506E4D5162E0DC5017DD5EF787B558C26DE3B32 (void);
// 0x000000AB System.Void UnityEngine.Purchasing.PurchasingManager::.ctor(UnityEngine.Purchasing.TransactionLog,UnityEngine.ILogger,UnityEngine.Purchasing.Extension.IStore,System.String,UnityEngine.Purchasing.IUnityServicesInitializationChecker)
extern void PurchasingManager__ctor_mCB0D60087EAFAB1B80E4429384FC486B0D6C84DD (void);
// 0x000000AC System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product)
extern void PurchasingManager_InitiatePurchase_m70C1EF24E7A657805043936BCB8A2E7665FEA01B (void);
// 0x000000AD System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(System.String)
extern void PurchasingManager_InitiatePurchase_m9C2FD1C5C88780782BB25F825AE5BE71DBD47FF5 (void);
// 0x000000AE System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(UnityEngine.Purchasing.Product,System.String)
extern void PurchasingManager_InitiatePurchase_m2A5BE0E011F34DE8167E99BBFB91E39E2A3242A7 (void);
// 0x000000AF System.Void UnityEngine.Purchasing.PurchasingManager::InitiatePurchase(System.String,System.String)
extern void PurchasingManager_InitiatePurchase_m2795F5F044CED262CC3CE535DF3A98BDC0B759FF (void);
// 0x000000B0 System.Void UnityEngine.Purchasing.PurchasingManager::ConfirmPendingPurchase(UnityEngine.Purchasing.Product)
extern void PurchasingManager_ConfirmPendingPurchase_m2165315C71C86149C51E5754EE535640CBD21165 (void);
// 0x000000B1 UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.PurchasingManager::get_products()
extern void PurchasingManager_get_products_m56CB926C1B7BB461DB73C6123AE9A8E75F0053FE (void);
// 0x000000B2 System.Void UnityEngine.Purchasing.PurchasingManager::set_products(UnityEngine.Purchasing.ProductCollection)
extern void PurchasingManager_set_products_m44F75BBAF71D24D159E8E6166E0B36B16A28AC43 (void);
// 0x000000B3 System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseSucceeded(System.String,System.String,System.String)
extern void PurchasingManager_OnPurchaseSucceeded_m280FF0BEF28B37D87FB7873031B4631488B4E2A7 (void);
// 0x000000B4 System.Void UnityEngine.Purchasing.PurchasingManager::UpdateProductReceiptAndTrandsactionID(UnityEngine.Purchasing.Product,System.String,System.String)
extern void PurchasingManager_UpdateProductReceiptAndTrandsactionID_m36538060E942911A6DFF8BAD10C5E5F61E8AD701 (void);
// 0x000000B5 System.Void UnityEngine.Purchasing.PurchasingManager::OnAllPurchasesRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>)
extern void PurchasingManager_OnAllPurchasesRetrieved_m814DB0B13619C95080C9EF8505481C294FCE05D6 (void);
// 0x000000B6 System.Void UnityEngine.Purchasing.PurchasingManager::HandlePurchaseRetrieved(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.Product)
extern void PurchasingManager_HandlePurchaseRetrieved_mB895E6539F83AD64A48AB1F29655F360908C51BA (void);
// 0x000000B7 System.Void UnityEngine.Purchasing.PurchasingManager::ClearProductReceipt(UnityEngine.Purchasing.Product)
extern void PurchasingManager_ClearProductReceipt_mFB1BBD8294D73A4CABD23DBE039276C3BE678304 (void);
// 0x000000B8 System.Void UnityEngine.Purchasing.PurchasingManager::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern void PurchasingManager_OnSetupFailed_m67E360EE84AC9A4F12DAD3F3B154176B8883E99B (void);
// 0x000000B9 System.Void UnityEngine.Purchasing.PurchasingManager::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
extern void PurchasingManager_OnPurchaseFailed_m3F246A54610EAE7AD0222C46A19E7CB47DAB42A8 (void);
// 0x000000BA System.Void UnityEngine.Purchasing.PurchasingManager::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
extern void PurchasingManager_OnProductsRetrieved_m21B8E53F845A62F6D7AC8960B1846283E99D6BF8 (void);
// 0x000000BB System.String UnityEngine.Purchasing.PurchasingManager::CreateUnifiedReceipt(System.String,System.String)
extern void PurchasingManager_CreateUnifiedReceipt_m589FC4DFAEE334D049CCC5877BCE31F9597C19F1 (void);
// 0x000000BC System.Void UnityEngine.Purchasing.PurchasingManager::ProcessPurchaseOnStart()
extern void PurchasingManager_ProcessPurchaseOnStart_m320FBE849060CC66940DD2DB3A886C1EC4716759 (void);
// 0x000000BD System.Void UnityEngine.Purchasing.PurchasingManager::FetchAdditionalProducts(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>,System.Action,System.Action`1<UnityEngine.Purchasing.InitializationFailureReason>)
extern void PurchasingManager_FetchAdditionalProducts_m41A2743805662C33D41CE0825E0C38FC4C5BDC9C (void);
// 0x000000BE System.Void UnityEngine.Purchasing.PurchasingManager::ProcessPurchaseIfNew(UnityEngine.Purchasing.Product)
extern void PurchasingManager_ProcessPurchaseIfNew_m2D54C04E78727264E91828FF8CCE516670D122EE (void);
// 0x000000BF System.Void UnityEngine.Purchasing.PurchasingManager::CheckForInitialization()
extern void PurchasingManager_CheckForInitialization_m6144B75126F92494E3EBEC736763C4FC9D77773E (void);
// 0x000000C0 System.Boolean UnityEngine.Purchasing.PurchasingManager::HasAvailableProductsToPurchase(System.Boolean)
extern void PurchasingManager_HasAvailableProductsToPurchase_m67C7C445B0E25C36F4C5D719F1B0C600CC3B35F3 (void);
// 0x000000C1 System.Void UnityEngine.Purchasing.PurchasingManager::Initialize(UnityEngine.Purchasing.IInternalStoreListener,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern void PurchasingManager_Initialize_mA99E10460D4C1C2FCE0D30423BA3B26215702F19 (void);
// 0x000000C2 System.Void UnityEngine.Purchasing.PurchasingManager/<>c__DisplayClass24_0::.ctor()
extern void U3CU3Ec__DisplayClass24_0__ctor_mAB2D1E4C82C02FFC308DE24AF6E0C81D57A6BD71 (void);
// 0x000000C3 System.Boolean UnityEngine.Purchasing.PurchasingManager/<>c__DisplayClass24_0::<OnAllPurchasesRetrieved>b__0(UnityEngine.Purchasing.Product)
extern void U3CU3Ec__DisplayClass24_0_U3COnAllPurchasesRetrievedU3Eb__0_mDD0CFFB66941954151AD3FAF03147145D1E98DA4 (void);
// 0x000000C4 System.Void UnityEngine.Purchasing.PurchasingManager/<>c::.cctor()
extern void U3CU3Ec__cctor_mCFB3600DD71A472580500306B2BDF9EDB69B3B6F (void);
// 0x000000C5 System.Void UnityEngine.Purchasing.PurchasingManager/<>c::.ctor()
extern void U3CU3Ec__ctor_m58310A3BCE52DBB543D6ED6CDEF5BF0BE6B1400C (void);
// 0x000000C6 UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchasingManager/<>c::<FetchAdditionalProducts>b__32_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CFetchAdditionalProductsU3Eb__32_0_mA970846265ED5329CF4AC7D60577047D8218E338 (void);
// 0x000000C7 UnityEngine.Purchasing.Product UnityEngine.Purchasing.PurchasingManager/<>c::<Initialize>b__37_0(UnityEngine.Purchasing.ProductDefinition)
extern void U3CU3Ec_U3CInitializeU3Eb__37_0_mB7FD45A4BCEA81A7BD0AF88608A0A296A41F9B74 (void);
// 0x000000C8 System.Void UnityEngine.Purchasing.SimpleCatalogProvider::.ctor(System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>)
extern void SimpleCatalogProvider__ctor_m0467C83F95712F8F49DB0BADFC16D103761DA25E (void);
// 0x000000C9 System.Void UnityEngine.Purchasing.SimpleCatalogProvider::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern void SimpleCatalogProvider_FetchProducts_m0B6529DE33C1F168BF6B69557795AD540B69829D (void);
// 0x000000CA System.Void UnityEngine.Purchasing.StoreListenerProxy::.ctor(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.IAnalyticsClient,UnityEngine.Purchasing.IExtensionProvider)
extern void StoreListenerProxy__ctor_mCFBF42DC965A2C076697C559F973529EDC3FC7CF (void);
// 0x000000CB System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitialized(UnityEngine.Purchasing.IStoreController)
extern void StoreListenerProxy_OnInitialized_m77FA701D500D01AE3B009ACE7418117F9C1587EE (void);
// 0x000000CC System.Void UnityEngine.Purchasing.StoreListenerProxy::OnInitializeFailed(UnityEngine.Purchasing.InitializationFailureReason)
extern void StoreListenerProxy_OnInitializeFailed_mF6BBB5F3A69220DA4C2176A4F926E6EE92390573 (void);
// 0x000000CD UnityEngine.Purchasing.PurchaseProcessingResult UnityEngine.Purchasing.StoreListenerProxy::ProcessPurchase(UnityEngine.Purchasing.PurchaseEventArgs)
extern void StoreListenerProxy_ProcessPurchase_mA9AB521D12B571937A046CA790B8756BEE8532D7 (void);
// 0x000000CE System.Void UnityEngine.Purchasing.StoreListenerProxy::OnPurchaseFailed(UnityEngine.Purchasing.Product,UnityEngine.Purchasing.PurchaseFailureReason)
extern void StoreListenerProxy_OnPurchaseFailed_m786F3854795F64B78ED557955F47F6ACD860C40D (void);
// 0x000000CF System.Void UnityEngine.Purchasing.TransactionLog::.ctor(UnityEngine.ILogger,System.String)
extern void TransactionLog__ctor_mC5BB2BB83711CFE938B9A2AD4EA61DEEBF4495B1 (void);
// 0x000000D0 System.Void UnityEngine.Purchasing.TransactionLog::Clear()
extern void TransactionLog_Clear_m050EE6A244E544ED4536916CDDF5EC81DD825536 (void);
// 0x000000D1 System.Boolean UnityEngine.Purchasing.TransactionLog::HasRecordOf(System.String)
extern void TransactionLog_HasRecordOf_m29C07CD50A9B3BE8070224551D9B901BDCC41A17 (void);
// 0x000000D2 System.Void UnityEngine.Purchasing.TransactionLog::Record(System.String)
extern void TransactionLog_Record_m8BC4886B4AC93874B0C760DF34DC9F2B4DBABD48 (void);
// 0x000000D3 System.String UnityEngine.Purchasing.TransactionLog::GetRecordPath(System.String)
extern void TransactionLog_GetRecordPath_m8147FDA0881E4CB3C16984AB759D3E9BBB5E12BF (void);
// 0x000000D4 System.String UnityEngine.Purchasing.TransactionLog::ComputeHash(System.String)
extern void TransactionLog_ComputeHash_m1FA0C2F9D584A425915D00C7405C7B113E8BD21C (void);
// 0x000000D5 System.Void UnityEngine.Purchasing.UnifiedReceipt::.ctor()
extern void UnifiedReceipt__ctor_mFCC9B55433AF02C9C267C3710A0A40D473051275 (void);
// 0x000000D6 UnityEngine.Purchasing.AnalyticsTransactionReceipt UnityEngine.Purchasing.UnifiedReceiptExtensions::ToReceiptAndSignature(UnityEngine.Purchasing.UnifiedReceipt)
extern void UnifiedReceiptExtensions_ToReceiptAndSignature_m1BF92D69639A7973812605632C7833A7A2297FB0 (void);
// 0x000000D7 System.Nullable`1<Unity.Services.Analytics.TransactionServer> UnityEngine.Purchasing.UnifiedReceiptExtensions::ToTransactionServer(UnityEngine.Purchasing.UnifiedReceipt)
extern void UnifiedReceiptExtensions_ToTransactionServer_m911979441AF8EA0EE75B8075BD5B3E5517D0EDF2 (void);
// 0x000000D8 System.String UnityEngine.Purchasing.UnifiedReceiptExtensions::EscapeEmbeddedQuotationMarks(System.String)
extern void UnifiedReceiptExtensions_EscapeEmbeddedQuotationMarks_mED198C1D1F4BB05EC54F3A83B50BD894AED9DAC9 (void);
// 0x000000D9 System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder)
extern void UnityPurchasing_Initialize_m3A3660906A52840A068FBEDFDA87BFB7DA4441BF (void);
// 0x000000DA UnityEngine.Purchasing.IAnalyticsAdapter UnityEngine.Purchasing.UnityPurchasing::GenerateUnityAnalytics()
extern void UnityPurchasing_GenerateUnityAnalytics_m9180DCEB1BCAB172B05605371F0D1D99ED3181BE (void);
// 0x000000DB UnityEngine.Purchasing.IAnalyticsAdapter UnityEngine.Purchasing.UnityPurchasing::GenerateLegacyUnityAnalytics()
extern void UnityPurchasing_GenerateLegacyUnityAnalytics_m845A53E31D0922AFE6D56B6AFD5E37B45B1C902B (void);
// 0x000000DC System.Void UnityEngine.Purchasing.UnityPurchasing::ClearTransactionLog()
extern void UnityPurchasing_ClearTransactionLog_m7E1E49AFA1803023B676D03A9BB1E0A26396CE5B (void);
// 0x000000DD System.Void UnityEngine.Purchasing.UnityPurchasing::Initialize(UnityEngine.Purchasing.IStoreListener,UnityEngine.Purchasing.ConfigurationBuilder,UnityEngine.ILogger,System.String,UnityEngine.Purchasing.IAnalyticsAdapter,UnityEngine.Purchasing.IAnalyticsAdapter,UnityEngine.Purchasing.Extension.ICatalogProvider,UnityEngine.Purchasing.IUnityServicesInitializationChecker)
extern void UnityPurchasing_Initialize_m2B13C2C4A47EBAE4FE5C6B2768B425626409BA9D (void);
// 0x000000DE System.Void UnityEngine.Purchasing.UnityPurchasing::FetchAndMergeProducts(System.Boolean,System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>,UnityEngine.Purchasing.Extension.ICatalogProvider,System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
extern void UnityPurchasing_FetchAndMergeProducts_mBD189B09C4959C970DF2B3AEC936E264372CEC23 (void);
// 0x000000DF System.Void UnityEngine.Purchasing.UnityPurchasing::.ctor()
extern void UnityPurchasing__ctor_m1F3BDA44927E3C83D697CC4424B9CC0F37E0F3A0 (void);
// 0x000000E0 System.Void UnityEngine.Purchasing.UnityPurchasing/<>c__DisplayClass4_0::.ctor()
extern void U3CU3Ec__DisplayClass4_0__ctor_m26750BDF5E16AD97A87B174FB524DA7B1C065F84 (void);
// 0x000000E1 System.Void UnityEngine.Purchasing.UnityPurchasing/<>c__DisplayClass4_0::<Initialize>b__0(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern void U3CU3Ec__DisplayClass4_0_U3CInitializeU3Eb__0_mEA8E7D7E02D994E42486DC0CC7C4ECB36A79974D (void);
// 0x000000E2 System.Void UnityEngine.Purchasing.UnityPurchasing/<>c__DisplayClass5_0::.ctor()
extern void U3CU3Ec__DisplayClass5_0__ctor_m8B4C60527FA6E4E3CB1F8B3A815E815CEFF66ECB (void);
// 0x000000E3 System.Void UnityEngine.Purchasing.UnityPurchasing/<>c__DisplayClass5_0::<FetchAndMergeProducts>b__0(System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>)
extern void U3CU3Ec__DisplayClass5_0_U3CFetchAndMergeProductsU3Eb__0_m149FB9E4AF229BE98F5420C7F1F1FFB8218C1068 (void);
// 0x000000E4 System.Void UnityEngine.Purchasing.LoggerExtensions::LogIAPWarning(UnityEngine.ILogger,System.String)
extern void LoggerExtensions_LogIAPWarning_mDA0CCDE0966C1E3B7572B90A48F7D481AE7EBE1B (void);
// 0x000000E5 System.Void UnityEngine.Purchasing.LoggerExtensions::LogIAPError(UnityEngine.ILogger,System.String)
extern void LoggerExtensions_LogIAPError_m3ACFF84FFB205CFA230A0B6D4A67D1CCCB2093B0 (void);
// 0x000000E6 System.Void UnityEngine.Purchasing.ProductPurchaseUpdater::UpdateProductReceiptAndTransactionID(UnityEngine.Purchasing.Product,System.String,System.String,System.String)
extern void ProductPurchaseUpdater_UpdateProductReceiptAndTransactionID_m46DAD3DEFF7F41B001E8095E5FE2FF40FC1F9E96 (void);
// 0x000000E7 System.String UnityEngine.Purchasing.UnifiedReceiptFormatter::FormatUnifiedReceipt(System.String,System.String,System.String)
extern void UnifiedReceiptFormatter_FormatUnifiedReceipt_mA0A760CC5D63998C854CD2C5405EE68CF6AC683F (void);
// 0x000000E8 System.Void UnityEngine.Purchasing.Telemetry.ITelemetryDiagnostics::SendDiagnostic(System.String,System.Exception)
// 0x000000E9 System.Void UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper::SetDiagnosticsInstance(Unity.Services.Core.Telemetry.Internal.IDiagnostics)
// 0x000000EA System.Void UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper::SendDiagnostic(System.String,System.String)
// 0x000000EB System.Void UnityEngine.Purchasing.Telemetry.TelemetryDiagnosticParams::.ctor(System.String,System.String)
extern void TelemetryDiagnosticParams__ctor_m485DD43E41AB5F7D907FC2ED7F6923192831FA86 (void);
// 0x000000EC System.Void UnityEngine.Purchasing.Telemetry.TelemetryDiagnostics::.ctor(UnityEngine.Purchasing.Telemetry.ITelemetryDiagnosticsInstanceWrapper)
extern void TelemetryDiagnostics__ctor_mCF22F64436BA1D11FE306525D456D2B75CF4B4EE (void);
// 0x000000ED System.Void UnityEngine.Purchasing.Telemetry.TelemetryDiagnostics::SendDiagnostic(System.String,System.Exception)
extern void TelemetryDiagnostics_SendDiagnostic_m778000CD5E7C7C24D3E6591DAD3CBC7C894BA595 (void);
// 0x000000EE System.Void UnityEngine.Purchasing.Telemetry.TelemetryDiagnosticsInstanceWrapper::.ctor()
extern void TelemetryDiagnosticsInstanceWrapper__ctor_m68AB5832950D86BBAE6A066A444FF1D7426DECBB (void);
// 0x000000EF System.Void UnityEngine.Purchasing.Telemetry.TelemetryDiagnosticsInstanceWrapper::SetDiagnosticsInstance(Unity.Services.Core.Telemetry.Internal.IDiagnostics)
extern void TelemetryDiagnosticsInstanceWrapper_SetDiagnosticsInstance_mB57B07C0E5158B917660A279A39AC15A459AD205 (void);
// 0x000000F0 System.Void UnityEngine.Purchasing.Telemetry.TelemetryDiagnosticsInstanceWrapper::SendDiagnostic(System.String,System.String)
extern void TelemetryDiagnosticsInstanceWrapper_SendDiagnostic_m89A44146E85C53ECC7CE562998339194353963D1 (void);
// 0x000000F1 System.Void UnityEngine.Purchasing.Telemetry.TelemetryDiagnosticsInstanceWrapper::SendDiagnostic(UnityEngine.Purchasing.Telemetry.TelemetryDiagnosticParams)
extern void TelemetryDiagnosticsInstanceWrapper_SendDiagnostic_m6A41338822BFDBF5DFE6CD96A2DAA464D00A6797 (void);
// 0x000000F2 System.Void UnityEngine.Purchasing.Telemetry.ITelemetryMetricEvent::StartMetric()
// 0x000000F3 System.Void UnityEngine.Purchasing.Telemetry.ITelemetryMetricEvent::StopAndSendMetric()
// 0x000000F4 System.Void UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper::SetMetricsInstance(Unity.Services.Core.Telemetry.Internal.IMetrics)
// 0x000000F5 System.Void UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper::SendMetric(UnityEngine.Purchasing.Telemetry.TelemetryMetricTypes,System.String,System.Double)
// 0x000000F6 System.Void UnityEngine.Purchasing.Telemetry.ITelemetryMetricsService::ExecuteTimedAction(System.Action,UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition)
// 0x000000F7 UnityEngine.Purchasing.Telemetry.ITelemetryMetricEvent UnityEngine.Purchasing.Telemetry.ITelemetryMetricsService::CreateAndStartMetricEvent(UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition)
// 0x000000F8 UnityEngine.Purchasing.Telemetry.TelemetryMetricTypes UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition::get_MetricType()
extern void TelemetryMetricDefinition_get_MetricType_m77BC5D460117EEB423B250384D7DEF536AAD8CA8 (void);
// 0x000000F9 System.String UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition::get_MetricName()
extern void TelemetryMetricDefinition_get_MetricName_mBEF9562B328293528518CB1BF704BC0DEE695DB9 (void);
// 0x000000FA System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition::.ctor(System.String,UnityEngine.Purchasing.Telemetry.TelemetryMetricTypes)
extern void TelemetryMetricDefinition__ctor_mE4BE25ADC8DF4FA2E5B70A30951A01D8A696DCA9 (void);
// 0x000000FB UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition::op_Implicit(System.String)
extern void TelemetryMetricDefinition_op_Implicit_mAA59311ED9E73663165AC4F2228BF46A8FB43A45 (void);
// 0x000000FC System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinitions::.cctor()
extern void TelemetryMetricDefinitions__cctor_m4F16C5D3560939CE866DF37B500E6CAC223054DF (void);
// 0x000000FD System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricEvent::.ctor(UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper,UnityEngine.Purchasing.Telemetry.TelemetryMetricTypes,System.String)
extern void TelemetryMetricEvent__ctor_mAF840075CFB0E6FDA897F2864EDC59848C11CB91 (void);
// 0x000000FE System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricEvent::StartMetric()
extern void TelemetryMetricEvent_StartMetric_mE7B890CE8B4234A9C7405A1116C6BD684F2E659E (void);
// 0x000000FF System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricEvent::StopAndSendMetric()
extern void TelemetryMetricEvent_StopAndSendMetric_m108A726B6D3329D9280CA3AD0809DF6E07EB8F8B (void);
// 0x00000100 System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricParams::.ctor(UnityEngine.Purchasing.Telemetry.TelemetryMetricTypes,System.String,System.Double)
extern void TelemetryMetricParams__ctor_mAA11B818AEDE212B298286D08438445EF2864B64 (void);
// 0x00000101 System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricsInstanceWrapper::.ctor()
extern void TelemetryMetricsInstanceWrapper__ctor_m5A523164B96C01D39F27F0C7448E55FA6D852983 (void);
// 0x00000102 System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricsInstanceWrapper::SetMetricsInstance(Unity.Services.Core.Telemetry.Internal.IMetrics)
extern void TelemetryMetricsInstanceWrapper_SetMetricsInstance_m15AE9CE67DF1163DFD4719589443FF374D4C139E (void);
// 0x00000103 System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricsInstanceWrapper::SendMetric(UnityEngine.Purchasing.Telemetry.TelemetryMetricTypes,System.String,System.Double)
extern void TelemetryMetricsInstanceWrapper_SendMetric_m9DECCE29ABFBA13330AA723F8615D804E9A5143C (void);
// 0x00000104 System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricsInstanceWrapper::SendMetricByType(UnityEngine.Purchasing.Telemetry.TelemetryMetricParams)
extern void TelemetryMetricsInstanceWrapper_SendMetricByType_m77F39CF45DEE48523A81437A7FECE04C148341C6 (void);
// 0x00000105 System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricsService::.ctor(UnityEngine.Purchasing.Telemetry.ITelemetryMetricsInstanceWrapper)
extern void TelemetryMetricsService__ctor_mDB35AF4406F2E81A9CDEA8D18F463E06CBEE4DF0 (void);
// 0x00000106 System.Void UnityEngine.Purchasing.Telemetry.TelemetryMetricsService::ExecuteTimedAction(System.Action,UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition)
extern void TelemetryMetricsService_ExecuteTimedAction_m001426D6FC406EAE079522C260C61FDC6584AA16 (void);
// 0x00000107 UnityEngine.Purchasing.Telemetry.ITelemetryMetricEvent UnityEngine.Purchasing.Telemetry.TelemetryMetricsService::CreateAndStartMetricEvent(UnityEngine.Purchasing.Telemetry.TelemetryMetricDefinition)
extern void TelemetryMetricsService_CreateAndStartMetricEvent_m2950794B140031B3AC30931965A32DE24478540E (void);
// 0x00000108 System.Void UnityEngine.Purchasing.Telemetry.TelemetryQueue`1::.ctor(System.Action`1<TTelemetryEventParams>)
// 0x00000109 System.Void UnityEngine.Purchasing.Telemetry.TelemetryQueue`1::QueueEvent(TTelemetryEventParams)
// 0x0000010A System.Void UnityEngine.Purchasing.Telemetry.TelemetryQueue`1::SendQueuedEvents()
// 0x0000010B System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::Configure(UnityEngine.Purchasing.Extension.IPurchasingBinder)
extern void AbstractPurchasingModule_Configure_mA2D3F2AFBFCFD572BBF2AE2EFE5F0F57ACB1D6C4 (void);
// 0x0000010C System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore)
extern void AbstractPurchasingModule_RegisterStore_mCAB1822ADDDBB394D16FA1C4DD22AA04DDD8D3FD (void);
// 0x0000010D System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::BindExtension(T)
// 0x0000010E System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::BindConfiguration(T)
// 0x0000010F System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::Configure()
// 0x00000110 System.Void UnityEngine.Purchasing.Extension.AbstractPurchasingModule::.ctor()
extern void AbstractPurchasingModule__ctor_mBED233D75772B5243C0D2590A37B1BEF331BAB68 (void);
// 0x00000111 System.Void UnityEngine.Purchasing.Extension.AbstractStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x00000112 System.Void UnityEngine.Purchasing.Extension.AbstractStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
// 0x00000113 System.Void UnityEngine.Purchasing.Extension.AbstractStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x00000114 System.Void UnityEngine.Purchasing.Extension.AbstractStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x00000115 System.Void UnityEngine.Purchasing.Extension.AbstractStore::.ctor()
extern void AbstractStore__ctor_mEC2076D59BF2100DABCD577660972095AAF41319 (void);
// 0x00000116 System.Void UnityEngine.Purchasing.Extension.ICatalogProvider::FetchProducts(System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>)
// 0x00000117 System.Void UnityEngine.Purchasing.Extension.IPurchasingBinder::RegisterStore(System.String,UnityEngine.Purchasing.Extension.IStore)
// 0x00000118 System.Void UnityEngine.Purchasing.Extension.IPurchasingBinder::RegisterExtension(T)
// 0x00000119 System.Void UnityEngine.Purchasing.Extension.IPurchasingBinder::RegisterConfiguration(T)
// 0x0000011A System.Void UnityEngine.Purchasing.Extension.IPurchasingBinder::SetCatalogProvider(UnityEngine.Purchasing.Extension.ICatalogProvider)
// 0x0000011B System.Void UnityEngine.Purchasing.Extension.IPurchasingBinder::SetCatalogProviderFunction(System.Action`1<System.Action`1<System.Collections.Generic.HashSet`1<UnityEngine.Purchasing.ProductDefinition>>>)
// 0x0000011C System.Void UnityEngine.Purchasing.Extension.IPurchasingModule::Configure(UnityEngine.Purchasing.Extension.IPurchasingBinder)
// 0x0000011D System.Void UnityEngine.Purchasing.Extension.IStore::Initialize(UnityEngine.Purchasing.Extension.IStoreCallback)
// 0x0000011E System.Void UnityEngine.Purchasing.Extension.IStore::RetrieveProducts(System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.Purchasing.ProductDefinition>)
// 0x0000011F System.Void UnityEngine.Purchasing.Extension.IStore::Purchase(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x00000120 System.Void UnityEngine.Purchasing.Extension.IStore::FinishTransaction(UnityEngine.Purchasing.ProductDefinition,System.String)
// 0x00000121 UnityEngine.Purchasing.ProductCollection UnityEngine.Purchasing.Extension.IStoreCallback::get_products()
// 0x00000122 System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnSetupFailed(UnityEngine.Purchasing.InitializationFailureReason)
// 0x00000123 System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnProductsRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Extension.ProductDescription>)
// 0x00000124 System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseSucceeded(System.String,System.String,System.String)
// 0x00000125 System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnAllPurchasesRetrieved(System.Collections.Generic.List`1<UnityEngine.Purchasing.Product>)
// 0x00000126 System.Void UnityEngine.Purchasing.Extension.IStoreCallback::OnPurchaseFailed(UnityEngine.Purchasing.Extension.PurchaseFailureDescription)
// 0x00000127 System.Boolean UnityEngine.Purchasing.Extension.IStoreCallback::get_useTransactionLog()
// 0x00000128 System.Void UnityEngine.Purchasing.Extension.IStoreCallback::set_useTransactionLog(System.Boolean)
// 0x00000129 System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String)
extern void ProductDescription__ctor_mB1C3A8337438FCF34BFBFE57377EB18E13BE6020 (void);
// 0x0000012A System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata,System.String,System.String,UnityEngine.Purchasing.ProductType)
extern void ProductDescription__ctor_mB30F8B195F2E33E469A3FEBC9C997506D0121414 (void);
// 0x0000012B System.Void UnityEngine.Purchasing.Extension.ProductDescription::.ctor(System.String,UnityEngine.Purchasing.ProductMetadata)
extern void ProductDescription__ctor_m3F16513F698277F44805212E0DDAA5918D5FD28F (void);
// 0x0000012C System.String UnityEngine.Purchasing.Extension.ProductDescription::get_storeSpecificId()
extern void ProductDescription_get_storeSpecificId_mF5D42DDD777C996BB28D5F429AAE62D77864E829 (void);
// 0x0000012D System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_storeSpecificId(System.String)
extern void ProductDescription_set_storeSpecificId_m38ADC834D046591389796C00A712BC657E552C7E (void);
// 0x0000012E UnityEngine.Purchasing.ProductMetadata UnityEngine.Purchasing.Extension.ProductDescription::get_metadata()
extern void ProductDescription_get_metadata_mA79854D8165BEDC08C98886D8994B632100FE2F8 (void);
// 0x0000012F System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_metadata(UnityEngine.Purchasing.ProductMetadata)
extern void ProductDescription_set_metadata_m1FDDE1A707FE9BD3DA9A8E03BE5C136BF8989225 (void);
// 0x00000130 System.String UnityEngine.Purchasing.Extension.ProductDescription::get_receipt()
extern void ProductDescription_get_receipt_m7AF4A337294A62D691D318999309C4E0D7B41DFA (void);
// 0x00000131 System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_receipt(System.String)
extern void ProductDescription_set_receipt_mBEDA486AFCF0D0C5BA8511323AD27EA10F9BDD2D (void);
// 0x00000132 System.String UnityEngine.Purchasing.Extension.ProductDescription::get_transactionId()
extern void ProductDescription_get_transactionId_m27FAF59061EF3B4747076E03C50E590A17F49539 (void);
// 0x00000133 System.Void UnityEngine.Purchasing.Extension.ProductDescription::set_transactionId(System.String)
extern void ProductDescription_set_transactionId_mBCB2A63F60AAF920E8A627DB0EC8FF0A480BD9BF (void);
// 0x00000134 System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::.ctor(System.String,UnityEngine.Purchasing.PurchaseFailureReason,System.String)
extern void PurchaseFailureDescription__ctor_m467906A609FC873BEF4902C3866F13A3BAFD990D (void);
// 0x00000135 System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_productId()
extern void PurchaseFailureDescription_get_productId_m8874D6F939CBAB1C6965E9A56152FB19FA14B614 (void);
// 0x00000136 System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_productId(System.String)
extern void PurchaseFailureDescription_set_productId_mBD73DC83502A73DC8B6F23233FC6F034BB13EDE0 (void);
// 0x00000137 UnityEngine.Purchasing.PurchaseFailureReason UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_reason()
extern void PurchaseFailureDescription_get_reason_m14B3F10AB89B2F558B350D09DF22BFB2DD3345A6 (void);
// 0x00000138 System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_reason(UnityEngine.Purchasing.PurchaseFailureReason)
extern void PurchaseFailureDescription_set_reason_m43846E285121C07773998BE842DD6924FC05B743 (void);
// 0x00000139 System.String UnityEngine.Purchasing.Extension.PurchaseFailureDescription::get_message()
extern void PurchaseFailureDescription_get_message_m39764440B03F56F4F8063853328C78DB4393FD75 (void);
// 0x0000013A System.Void UnityEngine.Purchasing.Extension.PurchaseFailureDescription::set_message(System.String)
extern void PurchaseFailureDescription_set_message_m8579CDFF7E771495BB9BF276228E3F431C9881F1 (void);
static Il2CppMethodPointer s_methodPointers[314] = 
{
	AnalyticsAdapter__ctor_mA9811522B1D76E182218030B5ECFFC002127239A,
	AnalyticsAdapter_SendTransactionEvent_m3D4EC01C181040995ECF157F640DFCBC7AD8A113,
	AnalyticsAdapter_BuildTransactionParameters_mF5F1F96933FDD4F6695C63FFA21D9EECD37FF3D4,
	AnalyticsAdapter_SendTransactionFailedEvent_m89C1635A1E1D695BDCBFC63F0CB8821371821736,
	AnalyticsAdapter_BuildTransactionFailedParameters_m9C7BC83953534BD49409C0D501573219966F4B76,
	AnalyticsAdapter_GenerateItemReceivedForPurchase_m9BFE5ED851537501F2F26D4D33B148DEED30C156,
	AnalyticsAdapter_GenerateRealCurrencySpentOnPurchase_m3785225DD68D7697A2C76C976D097D3DB261A757,
	AnalyticsAdapter_ExtractRealCurrencyAmount_mF9EFD2DB1F3CAE23DC11CEB2244B68921A3214F0,
	AnalyticsClient__ctor_m2B3BC8C9E0F2DEACBF520EA2CCBF1EA84086B6F5,
	AnalyticsClient_OnPurchaseSucceeded_mCFFD1B7949BA389232D3A91ADAFE4F79C0C371F5,
	AnalyticsClient_OnPurchaseFailed_m7C66BEECECBE60BBEE4E8ECE6B6715505AD7B677,
	EmptyAnalyticsAdapter_SendTransactionEvent_mEDEA0D1DFF43AEE74D65C92D009FB876122265A0,
	EmptyAnalyticsAdapter_SendTransactionFailedEvent_m8081DC5AC84DADC879809BF0BC13ECD970473679,
	EmptyAnalyticsAdapter__ctor_mB21F9FF9DC48E1FDE247FE9BC82DE1FA37DF01DD,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	LegacyAnalyticsAdapter__ctor_m22B82E810F5664ADFF89121DA730F6F5615B34CB,
	LegacyAnalyticsAdapter_SendTransactionEvent_m7956A04A967B9807E8720BD46279CDDE168A6009,
	LegacyAnalyticsAdapter_SendTransactionFailedEvent_m8A937D1819A3FC11EB73A683B47D455B2F7B4619,
	LegacyUnityAnalytics_SendTransactionEvent_m3ED76A12528E91922A0C6926F8F08CCA2E1D2374,
	LegacyUnityAnalytics_SendCustomEvent_m76C25E99FB209FDFFD5C8121B3AE90FF72512158,
	LegacyUnityAnalytics__ctor_mE3A3146AB2D7FA1BC66A86BE4B5D35396F0950CD,
	AnalyticsTransactionReceipt_get_transactionReceipt_m861E8487CD45E0D8FB3123F7407F482498B02BA5,
	AnalyticsTransactionReceipt_set_transactionReceipt_m9B77E89AD20AFB3C5045D3AEBF3263DDDBC62B50,
	AnalyticsTransactionReceipt_get_transactionReceiptSignature_m74243C5F3141D6A13B8BF78CFEAAC2D6C4294D50,
	AnalyticsTransactionReceipt_set_transactionReceiptSignature_m2F889BFABCFA2B966FC08B124E5EB2B8C0B3A593,
	AnalyticsTransactionReceipt_get_transactionServer_mF1786E391CFDAFF6EDF27CB16FC7C8D25D01E8C3,
	AnalyticsTransactionReceipt_set_transactionServer_mB9E6FC530A9084ABA7009503580193814D404F47,
	AnalyticsTransactionReceipt__ctor_m1A1182A422E4C72B5AF1168D1CF6C500DEE9B900,
	GoogleReceipt__ctor_mAE8CC3A37D0C8C555E1173E62C6487909EDE1DEC,
	IDs_System_Collections_IEnumerable_GetEnumerator_m69304DD3D56D46873ADC31B8CA1B542A48BFD4E9,
	IDs_Add_m84DA48DEDD7208CAB754B9DEB36B56D0D8A22AF4,
	IDs_Add_m90A7A1E587CF67C55574ABC3C3371F4037F63D3C,
	IDs_SpecificIDForStore_m7C06241E6A1BC984ABE2964028391176C507D9CF,
	IDs_GetEnumerator_mAF7B76FEBF6BA41FC5D276810232AA0C752C00A0,
	IDs__ctor_m6C335BDBF3A2649C4050BD8958BAEF1AC74EEB06,
	ConfigurationBuilder__ctor_m90B3A0F2A86E48CE359A7645A587EACB43E0AFF2,
	ConfigurationBuilder_get_useCatalogProvider_m91A7BC2D3B3C3C13DF77F8CA628820587F1FE99C,
	ConfigurationBuilder_set_useCatalogProvider_m93DE2B7E470A16832039B64C682C0DF44042E1C0,
	ConfigurationBuilder_get_products_m58DC9D24139168ED98A7B444EE7C10248857FB80,
	ConfigurationBuilder_get_factory_mEE2B11F372E146204E1DC9217E30587F2185F9A5,
	NULL,
	ConfigurationBuilder_Instance_mB6F4C9969C39F797F8D3CE9A0973264080F19FC3,
	ConfigurationBuilder_AddProduct_m5185C9211186D4C7D0434CE373E38E76F57BD212,
	ConfigurationBuilder_AddProduct_mC3646988D3D2629C6EF3C67D149989226121C95F,
	ConfigurationBuilder_AddProduct_m051EB32EE6B3CF1813AFCFC3B330707E5E3AAB03,
	ConfigurationBuilder_AddProduct_m6799057993FE410B9ACF1D975D7A154EAF9F70AA,
	ConfigurationBuilder_AddProducts_m6532195ED360206EE96F4CDB4668F4604331CFD2,
	NULL,
	UnityServicesInitializationChecker__ctor_m6D7C8363F62522F5BDE5FEC5872101B6F77AA180,
	UnityServicesInitializationChecker_CheckAndLogWarning_m3BB4063AA451AE65B2DA95C7648B627FB9B9C89D,
	UnityServicesInitializationChecker_IsUninitialized_mB237D675B93E61EEBB2C4ADD2ED8022CA36556C3,
	UnityServicesInitializationChecker_LogWarning_m3E8B0FFEA46514A0A8306701DF12B26B46C4A76C,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	PayoutDefinition_get_type_m11101EC785AEA16001D5BB6567FBBB53347718DF,
	PayoutDefinition_set_type_m96F9824AC43A87F2A79B06BACF6FC91BDD9A0160,
	PayoutDefinition_get_typeString_m60D95898428D6CA6FD545294994872FE902014A9,
	PayoutDefinition_get_subtype_m79D69CA15666B45F355FE4C8970A73F9F4DDC6F4,
	PayoutDefinition_set_subtype_mFC69080C95C36ACCE0F32AB227096463405D9BE8,
	PayoutDefinition_get_quantity_m78BB20B82394B1E637B5B24BD3C64303D74C3708,
	PayoutDefinition_set_quantity_mFAB711E82E14281F591C0B6C9456953CDE4A0796,
	PayoutDefinition_get_data_m5D499A15579A95597C88C513634DCCD2DA976FF5,
	PayoutDefinition_set_data_m4EF94B096C46902E3D7E4F06A10BA01B23CE60CE,
	PayoutDefinition__ctor_m80879883C96E2AFD35E01E35F3172DACFCE31C88,
	PayoutDefinition__ctor_m6773DDEA112FF71D665AEFBA07FE3758BEEDDC79,
	PayoutDefinition__ctor_m28968555D4C084806CF43AC45E53DFAE49F741D1,
	PayoutDefinition__ctor_m3E05C8A0F7D706A5C077679184A3DE8EA8739599,
	PayoutDefinition__ctor_mFFA9D7E1ED1490F73F119591C7BFED6D8520A0B7,
	PayoutDefinition__ctor_mC8191B390FCA55AFACE79A7A1FA50BF780F3AD62,
	PayoutDefinition__ctor_mAC74067DF2E1DDB5139EF894AABAD7C4B1D8DF45,
	Product__ctor_mEA754DD7DD9CA3D6C4A75885167EDAF2EEE14887,
	Product__ctor_mFD05003961781DF08C9B104D19211C1DF217CAFC,
	Product_get_definition_m99F1AE5F43863A860DF8C2CFC049EF41560A4873,
	Product_set_definition_mECBF1BA93CC08DE779DF581510FC1A6331EDD251,
	Product_get_metadata_mBACF5289A29D76CEB98A1CABD406840B8E4DF5C6,
	Product_set_metadata_m4BD030ED64A65BF5028BF22B429808E27B8AD168,
	Product_get_availableToPurchase_m51BC3BC202FC9C961C758BFB56C541B5B22270D1,
	Product_set_availableToPurchase_m8EBEF1A8429295BA48E4D7D6C951DE06D34B79A7,
	Product_get_transactionID_mDD04B32BEAECE064FBED1C4BF325D36E8D9B591D,
	Product_set_transactionID_m9225097DF50CC23D6161CE94FD192027D94C1207,
	Product_get_hasReceipt_m49FC7D56357278133CF9B58420C0F9EC897BEBC2,
	Product_get_receipt_m0C80E1794DD8A8F287F752B00188679B109BCAFA,
	Product_set_receipt_m2371F87ED179759A9D88C2156CBC6AC658605F51,
	Product_Equals_m96D836E7415504474C005A75A8A259D6E50403B2,
	Product_GetHashCode_m5C9D67CE70612F75123E365C99E5E67E6DC6DE90,
	ProductCollection__ctor_mA496B6F15279D8D310CB2DA67EE9F51491FD31B7,
	ProductCollection_AddProducts_m7F6C13CEB5F1B743CE4524E9878A47F9B12F22F8,
	ProductCollection_get_set_m5F30331F9C5AF536F4ED8B193D7B1022DDEDD7BE,
	ProductCollection_get_all_m37D0E42451E883AAD88D44E70F5B2D5E56763ED7,
	ProductCollection_WithID_m823B1BBFE1B1A91B7AA2E2BDD821F0D24F0C5543,
	ProductCollection_WithStoreSpecificID_mD2C0170E4A8F41D2F3E96163B46009A676B9E830,
	U3CU3Ec__cctor_m46883A38CE1604503FA2AE96355D825DC78BB12E,
	U3CU3Ec__ctor_m0909335C607F7D3D46285097177F2DFA466A7503,
	U3CU3Ec_U3CAddProductsU3Eb__5_0_m449C6AEE054BC2B2ED35D1AA5FD871B0CEC0FB6B,
	U3CU3Ec_U3CAddProductsU3Eb__5_1_m84302261302220B01F5437AB80F9FFCA847657CF,
	ProductDefinition__ctor_m27D3DFF4B34CE17FF3354CFA89379012213CA64B,
	ProductDefinition__ctor_m11578282A2F709573A7BE6A5790BA2CF5969B792,
	ProductDefinition__ctor_mE7C536B6F4985FACFD05B872D0B609F4427F359C,
	ProductDefinition__ctor_m9386926115DEEC6B27AB741430C7A0C34DBC32BB,
	ProductDefinition__ctor_m79F115614454B4DAAB2662D5E9D1976B92B427E7,
	ProductDefinition__ctor_m4691927A374B5BD09A7A0BB4A7204873AEF8A1D0,
	ProductDefinition_get_id_mAC2DA1CF1E54C939E2099E9045B09CBAC6BAB99B,
	ProductDefinition_set_id_m0BCFB65A2FE120D34D84C0499DF7343EB914C076,
	ProductDefinition_get_storeSpecificId_mEB2CB96C5CD753F11A4DF85F3C7B930110962E36,
	ProductDefinition_set_storeSpecificId_m6EE4EEB44943F320E2FBFE7E245E54BEC6AE4833,
	ProductDefinition_get_type_m66F4D4D03E3A6B95FD6F312EBACE07FA1B8E18E7,
	ProductDefinition_set_type_m625D8C9A03FB86B278F09CD89F38FB59317BCEDD,
	ProductDefinition_get_enabled_mCD39A6B3B60AB571102878818EB9B1087AE90EEB,
	ProductDefinition_set_enabled_m6A46D2C099819122BA0576167BAF4F06D490E3D4,
	ProductDefinition_Equals_mBD26EEFE03AE48087AF391045CC209057066182C,
	ProductDefinition_GetHashCode_mED5C0080546594104C5090C4B0077CB03ABBE0F5,
	ProductDefinition_get_payouts_m8DB79B43B18FF1AB41BEEAB7F393596AC1733AB7,
	ProductDefinition_get_payout_m408A5D78A3132B65F873155775D19989E356A468,
	ProductDefinition_SetPayouts_m1F07A4AEC2E899444B24A07A7B0524F3843A10C5,
	ProductMetadata__ctor_m602D2E51F4C49CD17EDB6F57374A6D4968E606F5,
	ProductMetadata__ctor_m4D1901A5E816329D3702B6833F1882DA67647686,
	ProductMetadata_get_localizedPriceString_m83C55E96B4BC39284D88F9BAAC64E60DFF7D408F,
	ProductMetadata_set_localizedPriceString_m26F6D7C900296E0BF10458BE90D1F866AAF74F94,
	ProductMetadata_get_localizedTitle_mBD34BFB3B5913154B4ACBC630A4DF8A664C9E258,
	ProductMetadata_set_localizedTitle_m818CA419C28B75AECD1FCA7F69F94A126BBBE424,
	ProductMetadata_get_localizedDescription_mF1507A605C357667ED05FAC2F486D527CA4E2887,
	ProductMetadata_set_localizedDescription_mB97AD70090BD48FA8AD0D9777E7AD45C55CEF110,
	ProductMetadata_get_isoCurrencyCode_mB14AD35EB399B34140F8497A96B678F719048FCC,
	ProductMetadata_set_isoCurrencyCode_m0443604C3F39BDF6CC4D1605667AC5EA20B6FC23,
	ProductMetadata_get_localizedPrice_m265DB58694A71F4608AE2A376B40037D75CB69B9,
	ProductMetadata_set_localizedPrice_m2B056F63E433DFE43E00E1ACC113C2A9ABF357E5,
	PurchaseEventArgs__ctor_m23F65E3572BA3903FC0362B332D12E4F83715167,
	PurchaseEventArgs_get_purchasedProduct_m0CBC223B555D7D331959FF53E7EDCEBE5E304B56,
	PurchaseEventArgs_set_purchasedProduct_m341BFA6C75A1DE33A7F1B2B2FCA8579F670B1BB5,
	PurchaseFailedEventArgs__ctor_m5AC7F1B6997ECA2A043B1C461C7A1D96B7AEC4D8,
	PurchaseFailedEventArgs_get_purchasedProduct_m3214F99E07C67771D1A1692645716ABFB448B021,
	PurchaseFailedEventArgs_set_purchasedProduct_mD8D4509A71790CA18C1F725E46FC2E1545C4C5E8,
	PurchaseFailedEventArgs_get_reason_m10603492C96A24512746AF962AFB4DFEE42E59A1,
	PurchaseFailedEventArgs_set_reason_m04963B2107F112D6F573EBF54A6EA61C002EE08A,
	PurchaseFailedEventArgs_get_message_m3A62AF2B88EDABE5DC25C059454D6E4404233613,
	PurchaseFailedEventArgs_set_message_m446F027B97630930B2804855A32195BD84E4DAEE,
	PurchasingFactory__ctor_m1459FC5C1EB02676DF5DDBDE5D8CBF12ABBFB530,
	PurchasingFactory_get_storeName_m90F704A0005078440D884F0179E2DD69CD845532,
	PurchasingFactory_set_storeName_mA1F9148E935D0928CB82A00DAD44071AECB9C0D1,
	PurchasingFactory_get_service_mF812B5981F40344A38958D66863F100BA9CEFAFA,
	PurchasingFactory_set_service_mA5DCE97087B8F6E93980B3F5A620FA3251322B85,
	PurchasingFactory_RegisterStore_mFA05E65120EA84AF5D65B912F30EDB0BAF190B96,
	NULL,
	NULL,
	NULL,
	NULL,
	PurchasingFactory_SetCatalogProvider_mF2A3349C09C7E1979163DB6F6A5008BA7537B024,
	PurchasingFactory_SetCatalogProviderFunction_m016619C10241A678931DB122D78005F9F877C4CE,
	PurchasingFactory_GetCatalogProvider_mF6F64C5D260A60653D171947B8DB6A7F4E922F56,
	PurchasingManager_get_useTransactionLog_m2788EF6477AD0E5BA9A982D0774483E1DD8E88F1,
	PurchasingManager_set_useTransactionLog_m7506E4D5162E0DC5017DD5EF787B558C26DE3B32,
	PurchasingManager__ctor_mCB0D60087EAFAB1B80E4429384FC486B0D6C84DD,
	PurchasingManager_InitiatePurchase_m70C1EF24E7A657805043936BCB8A2E7665FEA01B,
	PurchasingManager_InitiatePurchase_m9C2FD1C5C88780782BB25F825AE5BE71DBD47FF5,
	PurchasingManager_InitiatePurchase_m2A5BE0E011F34DE8167E99BBFB91E39E2A3242A7,
	PurchasingManager_InitiatePurchase_m2795F5F044CED262CC3CE535DF3A98BDC0B759FF,
	PurchasingManager_ConfirmPendingPurchase_m2165315C71C86149C51E5754EE535640CBD21165,
	PurchasingManager_get_products_m56CB926C1B7BB461DB73C6123AE9A8E75F0053FE,
	PurchasingManager_set_products_m44F75BBAF71D24D159E8E6166E0B36B16A28AC43,
	PurchasingManager_OnPurchaseSucceeded_m280FF0BEF28B37D87FB7873031B4631488B4E2A7,
	PurchasingManager_UpdateProductReceiptAndTrandsactionID_m36538060E942911A6DFF8BAD10C5E5F61E8AD701,
	PurchasingManager_OnAllPurchasesRetrieved_m814DB0B13619C95080C9EF8505481C294FCE05D6,
	PurchasingManager_HandlePurchaseRetrieved_mB895E6539F83AD64A48AB1F29655F360908C51BA,
	PurchasingManager_ClearProductReceipt_mFB1BBD8294D73A4CABD23DBE039276C3BE678304,
	PurchasingManager_OnSetupFailed_m67E360EE84AC9A4F12DAD3F3B154176B8883E99B,
	PurchasingManager_OnPurchaseFailed_m3F246A54610EAE7AD0222C46A19E7CB47DAB42A8,
	PurchasingManager_OnProductsRetrieved_m21B8E53F845A62F6D7AC8960B1846283E99D6BF8,
	PurchasingManager_CreateUnifiedReceipt_m589FC4DFAEE334D049CCC5877BCE31F9597C19F1,
	PurchasingManager_ProcessPurchaseOnStart_m320FBE849060CC66940DD2DB3A886C1EC4716759,
	PurchasingManager_FetchAdditionalProducts_m41A2743805662C33D41CE0825E0C38FC4C5BDC9C,
	PurchasingManager_ProcessPurchaseIfNew_m2D54C04E78727264E91828FF8CCE516670D122EE,
	PurchasingManager_CheckForInitialization_m6144B75126F92494E3EBEC736763C4FC9D77773E,
	PurchasingManager_HasAvailableProductsToPurchase_m67C7C445B0E25C36F4C5D719F1B0C600CC3B35F3,
	PurchasingManager_Initialize_mA99E10460D4C1C2FCE0D30423BA3B26215702F19,
	U3CU3Ec__DisplayClass24_0__ctor_mAB2D1E4C82C02FFC308DE24AF6E0C81D57A6BD71,
	U3CU3Ec__DisplayClass24_0_U3COnAllPurchasesRetrievedU3Eb__0_mDD0CFFB66941954151AD3FAF03147145D1E98DA4,
	U3CU3Ec__cctor_mCFB3600DD71A472580500306B2BDF9EDB69B3B6F,
	U3CU3Ec__ctor_m58310A3BCE52DBB543D6ED6CDEF5BF0BE6B1400C,
	U3CU3Ec_U3CFetchAdditionalProductsU3Eb__32_0_mA970846265ED5329CF4AC7D60577047D8218E338,
	U3CU3Ec_U3CInitializeU3Eb__37_0_mB7FD45A4BCEA81A7BD0AF88608A0A296A41F9B74,
	SimpleCatalogProvider__ctor_m0467C83F95712F8F49DB0BADFC16D103761DA25E,
	SimpleCatalogProvider_FetchProducts_m0B6529DE33C1F168BF6B69557795AD540B69829D,
	StoreListenerProxy__ctor_mCFBF42DC965A2C076697C559F973529EDC3FC7CF,
	StoreListenerProxy_OnInitialized_m77FA701D500D01AE3B009ACE7418117F9C1587EE,
	StoreListenerProxy_OnInitializeFailed_mF6BBB5F3A69220DA4C2176A4F926E6EE92390573,
	StoreListenerProxy_ProcessPurchase_mA9AB521D12B571937A046CA790B8756BEE8532D7,
	StoreListenerProxy_OnPurchaseFailed_m786F3854795F64B78ED557955F47F6ACD860C40D,
	TransactionLog__ctor_mC5BB2BB83711CFE938B9A2AD4EA61DEEBF4495B1,
	TransactionLog_Clear_m050EE6A244E544ED4536916CDDF5EC81DD825536,
	TransactionLog_HasRecordOf_m29C07CD50A9B3BE8070224551D9B901BDCC41A17,
	TransactionLog_Record_m8BC4886B4AC93874B0C760DF34DC9F2B4DBABD48,
	TransactionLog_GetRecordPath_m8147FDA0881E4CB3C16984AB759D3E9BBB5E12BF,
	TransactionLog_ComputeHash_m1FA0C2F9D584A425915D00C7405C7B113E8BD21C,
	UnifiedReceipt__ctor_mFCC9B55433AF02C9C267C3710A0A40D473051275,
	UnifiedReceiptExtensions_ToReceiptAndSignature_m1BF92D69639A7973812605632C7833A7A2297FB0,
	UnifiedReceiptExtensions_ToTransactionServer_m911979441AF8EA0EE75B8075BD5B3E5517D0EDF2,
	UnifiedReceiptExtensions_EscapeEmbeddedQuotationMarks_mED198C1D1F4BB05EC54F3A83B50BD894AED9DAC9,
	UnityPurchasing_Initialize_m3A3660906A52840A068FBEDFDA87BFB7DA4441BF,
	UnityPurchasing_GenerateUnityAnalytics_m9180DCEB1BCAB172B05605371F0D1D99ED3181BE,
	UnityPurchasing_GenerateLegacyUnityAnalytics_m845A53E31D0922AFE6D56B6AFD5E37B45B1C902B,
	UnityPurchasing_ClearTransactionLog_m7E1E49AFA1803023B676D03A9BB1E0A26396CE5B,
	UnityPurchasing_Initialize_m2B13C2C4A47EBAE4FE5C6B2768B425626409BA9D,
	UnityPurchasing_FetchAndMergeProducts_mBD189B09C4959C970DF2B3AEC936E264372CEC23,
	UnityPurchasing__ctor_m1F3BDA44927E3C83D697CC4424B9CC0F37E0F3A0,
	U3CU3Ec__DisplayClass4_0__ctor_m26750BDF5E16AD97A87B174FB524DA7B1C065F84,
	U3CU3Ec__DisplayClass4_0_U3CInitializeU3Eb__0_mEA8E7D7E02D994E42486DC0CC7C4ECB36A79974D,
	U3CU3Ec__DisplayClass5_0__ctor_m8B4C60527FA6E4E3CB1F8B3A815E815CEFF66ECB,
	U3CU3Ec__DisplayClass5_0_U3CFetchAndMergeProductsU3Eb__0_m149FB9E4AF229BE98F5420C7F1F1FFB8218C1068,
	LoggerExtensions_LogIAPWarning_mDA0CCDE0966C1E3B7572B90A48F7D481AE7EBE1B,
	LoggerExtensions_LogIAPError_m3ACFF84FFB205CFA230A0B6D4A67D1CCCB2093B0,
	ProductPurchaseUpdater_UpdateProductReceiptAndTransactionID_m46DAD3DEFF7F41B001E8095E5FE2FF40FC1F9E96,
	UnifiedReceiptFormatter_FormatUnifiedReceipt_mA0A760CC5D63998C854CD2C5405EE68CF6AC683F,
	NULL,
	NULL,
	NULL,
	TelemetryDiagnosticParams__ctor_m485DD43E41AB5F7D907FC2ED7F6923192831FA86,
	TelemetryDiagnostics__ctor_mCF22F64436BA1D11FE306525D456D2B75CF4B4EE,
	TelemetryDiagnostics_SendDiagnostic_m778000CD5E7C7C24D3E6591DAD3CBC7C894BA595,
	TelemetryDiagnosticsInstanceWrapper__ctor_m68AB5832950D86BBAE6A066A444FF1D7426DECBB,
	TelemetryDiagnosticsInstanceWrapper_SetDiagnosticsInstance_mB57B07C0E5158B917660A279A39AC15A459AD205,
	TelemetryDiagnosticsInstanceWrapper_SendDiagnostic_m89A44146E85C53ECC7CE562998339194353963D1,
	TelemetryDiagnosticsInstanceWrapper_SendDiagnostic_m6A41338822BFDBF5DFE6CD96A2DAA464D00A6797,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	TelemetryMetricDefinition_get_MetricType_m77BC5D460117EEB423B250384D7DEF536AAD8CA8,
	TelemetryMetricDefinition_get_MetricName_mBEF9562B328293528518CB1BF704BC0DEE695DB9,
	TelemetryMetricDefinition__ctor_mE4BE25ADC8DF4FA2E5B70A30951A01D8A696DCA9,
	TelemetryMetricDefinition_op_Implicit_mAA59311ED9E73663165AC4F2228BF46A8FB43A45,
	TelemetryMetricDefinitions__cctor_m4F16C5D3560939CE866DF37B500E6CAC223054DF,
	TelemetryMetricEvent__ctor_mAF840075CFB0E6FDA897F2864EDC59848C11CB91,
	TelemetryMetricEvent_StartMetric_mE7B890CE8B4234A9C7405A1116C6BD684F2E659E,
	TelemetryMetricEvent_StopAndSendMetric_m108A726B6D3329D9280CA3AD0809DF6E07EB8F8B,
	TelemetryMetricParams__ctor_mAA11B818AEDE212B298286D08438445EF2864B64,
	TelemetryMetricsInstanceWrapper__ctor_m5A523164B96C01D39F27F0C7448E55FA6D852983,
	TelemetryMetricsInstanceWrapper_SetMetricsInstance_m15AE9CE67DF1163DFD4719589443FF374D4C139E,
	TelemetryMetricsInstanceWrapper_SendMetric_m9DECCE29ABFBA13330AA723F8615D804E9A5143C,
	TelemetryMetricsInstanceWrapper_SendMetricByType_m77F39CF45DEE48523A81437A7FECE04C148341C6,
	TelemetryMetricsService__ctor_mDB35AF4406F2E81A9CDEA8D18F463E06CBEE4DF0,
	TelemetryMetricsService_ExecuteTimedAction_m001426D6FC406EAE079522C260C61FDC6584AA16,
	TelemetryMetricsService_CreateAndStartMetricEvent_m2950794B140031B3AC30931965A32DE24478540E,
	NULL,
	NULL,
	NULL,
	AbstractPurchasingModule_Configure_mA2D3F2AFBFCFD572BBF2AE2EFE5F0F57ACB1D6C4,
	AbstractPurchasingModule_RegisterStore_mCAB1822ADDDBB394D16FA1C4DD22AA04DDD8D3FD,
	NULL,
	NULL,
	NULL,
	AbstractPurchasingModule__ctor_mBED233D75772B5243C0D2590A37B1BEF331BAB68,
	NULL,
	NULL,
	NULL,
	NULL,
	AbstractStore__ctor_mEC2076D59BF2100DABCD577660972095AAF41319,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	ProductDescription__ctor_mB1C3A8337438FCF34BFBFE57377EB18E13BE6020,
	ProductDescription__ctor_mB30F8B195F2E33E469A3FEBC9C997506D0121414,
	ProductDescription__ctor_m3F16513F698277F44805212E0DDAA5918D5FD28F,
	ProductDescription_get_storeSpecificId_mF5D42DDD777C996BB28D5F429AAE62D77864E829,
	ProductDescription_set_storeSpecificId_m38ADC834D046591389796C00A712BC657E552C7E,
	ProductDescription_get_metadata_mA79854D8165BEDC08C98886D8994B632100FE2F8,
	ProductDescription_set_metadata_m1FDDE1A707FE9BD3DA9A8E03BE5C136BF8989225,
	ProductDescription_get_receipt_m7AF4A337294A62D691D318999309C4E0D7B41DFA,
	ProductDescription_set_receipt_mBEDA486AFCF0D0C5BA8511323AD27EA10F9BDD2D,
	ProductDescription_get_transactionId_m27FAF59061EF3B4747076E03C50E590A17F49539,
	ProductDescription_set_transactionId_mBCB2A63F60AAF920E8A627DB0EC8FF0A480BD9BF,
	PurchaseFailureDescription__ctor_m467906A609FC873BEF4902C3866F13A3BAFD990D,
	PurchaseFailureDescription_get_productId_m8874D6F939CBAB1C6965E9A56152FB19FA14B614,
	PurchaseFailureDescription_set_productId_mBD73DC83502A73DC8B6F23233FC6F034BB13EDE0,
	PurchaseFailureDescription_get_reason_m14B3F10AB89B2F558B350D09DF22BFB2DD3345A6,
	PurchaseFailureDescription_set_reason_m43846E285121C07773998BE842DD6924FC05B743,
	PurchaseFailureDescription_get_message_m39764440B03F56F4F8063853328C78DB4393FD75,
	PurchaseFailureDescription_set_message_m8579CDFF7E771495BB9BF276228E3F431C9881F1,
};
extern void TelemetryDiagnosticParams__ctor_m485DD43E41AB5F7D907FC2ED7F6923192831FA86_AdjustorThunk (void);
extern void TelemetryMetricDefinition_get_MetricType_m77BC5D460117EEB423B250384D7DEF536AAD8CA8_AdjustorThunk (void);
extern void TelemetryMetricDefinition_get_MetricName_mBEF9562B328293528518CB1BF704BC0DEE695DB9_AdjustorThunk (void);
extern void TelemetryMetricDefinition__ctor_mE4BE25ADC8DF4FA2E5B70A30951A01D8A696DCA9_AdjustorThunk (void);
extern void TelemetryMetricParams__ctor_mAA11B818AEDE212B298286D08438445EF2864B64_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[5] = 
{
	{ 0x060000EB, TelemetryDiagnosticParams__ctor_m485DD43E41AB5F7D907FC2ED7F6923192831FA86_AdjustorThunk },
	{ 0x060000F8, TelemetryMetricDefinition_get_MetricType_m77BC5D460117EEB423B250384D7DEF536AAD8CA8_AdjustorThunk },
	{ 0x060000F9, TelemetryMetricDefinition_get_MetricName_mBEF9562B328293528518CB1BF704BC0DEE695DB9_AdjustorThunk },
	{ 0x060000FA, TelemetryMetricDefinition__ctor_mE4BE25ADC8DF4FA2E5B70A30951A01D8A696DCA9_AdjustorThunk },
	{ 0x06000100, TelemetryMetricParams__ctor_mAA11B818AEDE212B298286D08438445EF2864B64_AdjustorThunk },
};
static const int32_t s_InvokerIndices[314] = 
{
	4358,
	4358,
	1232,
	2456,
	2007,
	3922,
	3922,
	3833,
	2460,
	4358,
	2456,
	4358,
	2456,
	5414,
	0,
	0,
	0,
	0,
	0,
	0,
	4358,
	4358,
	2456,
	504,
	2460,
	5414,
	5289,
	4358,
	5289,
	4358,
	5122,
	4200,
	5414,
	5414,
	5289,
	2460,
	2460,
	1966,
	5289,
	5414,
	4358,
	5212,
	4280,
	5289,
	5289,
	0,
	7457,
	1965,
	1204,
	828,
	828,
	3894,
	0,
	4358,
	5414,
	5212,
	5414,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	5263,
	4335,
	5289,
	5289,
	4358,
	5234,
	4306,
	5289,
	4358,
	5414,
	1384,
	984,
	2454,
	1356,
	1328,
	918,
	1387,
	2460,
	5289,
	4358,
	5289,
	4358,
	5212,
	4280,
	5289,
	4358,
	5212,
	5289,
	4358,
	3109,
	5263,
	4358,
	4358,
	5289,
	5289,
	3894,
	3894,
	9767,
	5414,
	3894,
	3894,
	5414,
	1385,
	988,
	521,
	521,
	2456,
	5289,
	4358,
	5289,
	4358,
	5263,
	4335,
	5212,
	4280,
	3109,
	5263,
	5289,
	5289,
	4358,
	533,
	5414,
	5289,
	4358,
	5289,
	4358,
	5289,
	4358,
	5289,
	4358,
	5230,
	4302,
	4358,
	5289,
	4358,
	1368,
	5289,
	4358,
	5263,
	4335,
	5289,
	4358,
	2460,
	5289,
	4358,
	5289,
	4358,
	2460,
	0,
	0,
	0,
	0,
	4358,
	4358,
	5289,
	5212,
	4280,
	535,
	4358,
	4358,
	2460,
	2460,
	4358,
	5289,
	4358,
	1387,
	1387,
	4358,
	2460,
	8977,
	4335,
	4358,
	4358,
	1966,
	5414,
	1387,
	4358,
	5414,
	3038,
	2460,
	5414,
	3109,
	9767,
	5414,
	3894,
	3894,
	4358,
	4358,
	1387,
	4358,
	4335,
	3664,
	2456,
	2460,
	5414,
	3109,
	4358,
	3894,
	8663,
	5414,
	8663,
	8351,
	8663,
	7692,
	9737,
	9737,
	9767,
	5631,
	6477,
	5414,
	5414,
	4358,
	5414,
	4358,
	7692,
	7692,
	6518,
	6825,
	0,
	0,
	0,
	2460,
	4358,
	2460,
	5414,
	4358,
	2460,
	4435,
	0,
	0,
	0,
	0,
	0,
	0,
	5263,
	5289,
	2456,
	8827,
	9767,
	1368,
	5414,
	5414,
	1328,
	5414,
	4358,
	1328,
	4436,
	4358,
	2468,
	3902,
	0,
	0,
	0,
	4358,
	2460,
	0,
	0,
	0,
	5414,
	0,
	0,
	0,
	0,
	5414,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	996,
	534,
	2460,
	5289,
	4358,
	5289,
	4358,
	5289,
	4358,
	5289,
	4358,
	1368,
	5289,
	4358,
	5263,
	4335,
	5289,
	4358,
};
static const Il2CppTokenRangePair s_rgctxIndices[8] = 
{
	{ 0x02000041, { 9, 13 } },
	{ 0x0600002E, { 0, 1 } },
	{ 0x060000A2, { 1, 2 } },
	{ 0x060000A3, { 3, 2 } },
	{ 0x060000A4, { 5, 2 } },
	{ 0x060000A5, { 7, 2 } },
	{ 0x0600010D, { 22, 1 } },
	{ 0x0600010E, { 23, 1 } },
};
extern const uint32_t g_rgctx_PurchasingFactory_GetConfig_TisT_t0E7CDBA5A24355DD0DD619265D36361F9895DD41_m28EECBFD7154A855C6C3D02F0A905D7C229DC844;
extern const uint32_t g_rgctx_T_t343E6BEC13A4CED0C8C3843CF099F9DD2FF3F5CF;
extern const uint32_t g_rgctx_T_t343E6BEC13A4CED0C8C3843CF099F9DD2FF3F5CF;
extern const uint32_t g_rgctx_T_tAFA3BDBAA0D8D3D7E2F206D29B4FCCCDA2BB50B6;
extern const uint32_t g_rgctx_T_tAFA3BDBAA0D8D3D7E2F206D29B4FCCCDA2BB50B6;
extern const uint32_t g_rgctx_T_tAF5E3517482FABD129FAC5561A48BCE696B3F6B0;
extern const uint32_t g_rgctx_T_tAF5E3517482FABD129FAC5561A48BCE696B3F6B0;
extern const uint32_t g_rgctx_T_t86448EB42719F8D6D102C0241217E60B96531970;
extern const uint32_t g_rgctx_T_t86448EB42719F8D6D102C0241217E60B96531970;
extern const uint32_t g_rgctx_Queue_1_tEE4EECC1B42E72D937AB3F9F6367D7ECF518E7BE;
extern const uint32_t g_rgctx_Queue_1__ctor_m6CE5B8E9910F65247307BDB809603680841CCCEA;
extern const uint32_t g_rgctx_Queue_1_Enqueue_m5BD59308B81AAD31BCF6A0E3C2A2E10E0B2565CF;
extern const uint32_t g_rgctx_Queue_1_get_Count_m85DCC6314DEE7B39FB1D87A12D9135138763C377;
extern const uint32_t g_rgctx_Queue_1_Dequeue_m4534E9E134B11F5F7E81D6404791614E9AD4CAEF;
extern const uint32_t g_rgctx_Queue_1_GetEnumerator_mA458121D481DC783692015DA2978FA10E1C8C006;
extern const uint32_t g_rgctx_Enumerator_get_Current_m54B68CE3A52882DF58E1E54662EE1F85DCD07FB9;
extern const uint32_t g_rgctx_Action_1_t7FE6F9C445689BAE3CF8F5ED6E94D128A6018817;
extern const uint32_t g_rgctx_Action_1_Invoke_mA03AA973A520E08769CE0E48F083CE7BDE3AC652;
extern const uint32_t g_rgctx_Enumerator_MoveNext_m81CFA299C4C017B4C1B4F176415F0D6F473A879F;
extern const uint32_t g_rgctx_Enumerator_tD1895E878B10FEA0C3BB04144C16BBEC5A557D3F;
extern const Il2CppRGCTXConstrainedData g_rgctx_Enumerator_tD1895E878B10FEA0C3BB04144C16BBEC5A557D3F_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7;
extern const uint32_t g_rgctx_Queue_1_Clear_m337B1E68FAEA678B1A2023F0EA9FDD27A865F827;
extern const uint32_t g_rgctx_IPurchasingBinder_RegisterExtension_TisT_t61D47F38AF25CB76A2A1AF68046387FD3AF16A7A_m884176633F8D70D2C2129D28EFB2FAC857E4FD03;
extern const uint32_t g_rgctx_IPurchasingBinder_RegisterConfiguration_TisT_tEA7BD6BBD62C358DBB1697862AB0FE43F223E682_m3111148C84D7A85C132046FDEE3C258A95335464;
static const Il2CppRGCTXDefinition s_rgctxValues[24] = 
{
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_PurchasingFactory_GetConfig_TisT_t0E7CDBA5A24355DD0DD619265D36361F9895DD41_m28EECBFD7154A855C6C3D02F0A905D7C229DC844 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t343E6BEC13A4CED0C8C3843CF099F9DD2FF3F5CF },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t343E6BEC13A4CED0C8C3843CF099F9DD2FF3F5CF },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tAFA3BDBAA0D8D3D7E2F206D29B4FCCCDA2BB50B6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tAFA3BDBAA0D8D3D7E2F206D29B4FCCCDA2BB50B6 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_tAF5E3517482FABD129FAC5561A48BCE696B3F6B0 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_tAF5E3517482FABD129FAC5561A48BCE696B3F6B0 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_T_t86448EB42719F8D6D102C0241217E60B96531970 },
	{ (Il2CppRGCTXDataType)1, (const void *)&g_rgctx_T_t86448EB42719F8D6D102C0241217E60B96531970 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Queue_1_tEE4EECC1B42E72D937AB3F9F6367D7ECF518E7BE },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1__ctor_m6CE5B8E9910F65247307BDB809603680841CCCEA },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Enqueue_m5BD59308B81AAD31BCF6A0E3C2A2E10E0B2565CF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_get_Count_m85DCC6314DEE7B39FB1D87A12D9135138763C377 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Dequeue_m4534E9E134B11F5F7E81D6404791614E9AD4CAEF },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_GetEnumerator_mA458121D481DC783692015DA2978FA10E1C8C006 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_get_Current_m54B68CE3A52882DF58E1E54662EE1F85DCD07FB9 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Action_1_t7FE6F9C445689BAE3CF8F5ED6E94D128A6018817 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Action_1_Invoke_mA03AA973A520E08769CE0E48F083CE7BDE3AC652 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Enumerator_MoveNext_m81CFA299C4C017B4C1B4F176415F0D6F473A879F },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_Enumerator_tD1895E878B10FEA0C3BB04144C16BBEC5A557D3F },
	{ (Il2CppRGCTXDataType)5, (const void *)&g_rgctx_Enumerator_tD1895E878B10FEA0C3BB04144C16BBEC5A557D3F_IDisposable_Dispose_m3C902735BE731EE30AC1185E7AEF6ACE7A9D9CC7 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_Queue_1_Clear_m337B1E68FAEA678B1A2023F0EA9FDD27A865F827 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPurchasingBinder_RegisterExtension_TisT_t61D47F38AF25CB76A2A1AF68046387FD3AF16A7A_m884176633F8D70D2C2129D28EFB2FAC857E4FD03 },
	{ (Il2CppRGCTXDataType)3, (const void *)&g_rgctx_IPurchasingBinder_RegisterConfiguration_TisT_tEA7BD6BBD62C358DBB1697862AB0FE43F223E682_m3111148C84D7A85C132046FDEE3C258A95335464 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_Purchasing_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_Purchasing_CodeGenModule = 
{
	"UnityEngine.Purchasing.dll",
	314,
	s_methodPointers,
	5,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	8,
	s_rgctxIndices,
	24,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
