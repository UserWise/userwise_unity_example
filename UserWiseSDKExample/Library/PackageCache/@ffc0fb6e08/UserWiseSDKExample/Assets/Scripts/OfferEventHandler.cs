using System;
using System.Text;
using System.Collections.Generic;
using UnityEngine;
using UserWiseSDK;
using UserWiseSDK.Offers;

public static class OfferEventHandler
{
    public static void OnOffersLoaded(object sender, EventArgs args)
    {
        OffersModule offersModule = UserWise.INSTANCE.OffersModule;
        Debug.Log(String.Format("Offers have been loaded!  {0} Available | {1} Upcoming", offersModule.ActiveOffers.Count, offersModule.UpcomingOffers.Count));
    }

    public static void OnOfferAvailable(object sender, OfferEventArgs args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Offer Available!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Offer.Id));
        stringBuilder.AppendLine(String.Format("| Title: {0}", args.Offer.Title));
        stringBuilder.AppendLine(String.Format("| Body: {0}", args.Offer.Body));
        stringBuilder.AppendLine(String.Format("| Portrait Image ID: {0}", args.Offer.PortraitImageId));
        stringBuilder.AppendLine(String.Format("| Landscape Image ID: {0}", args.Offer.LandscapeImageId));
        stringBuilder.AppendLine(String.Format("| Cost: {0}", args.Offer.Cost));
        stringBuilder.AppendLine(String.Format("| Android Product ID: {0}", args.Offer.AndroidProductId));
        stringBuilder.AppendLine(String.Format("| iOS Product ID: {0}", args.Offer.IOSProductId));

        StringBuilder itemString = new StringBuilder();
        foreach (KeyValuePair<string, long> entry in args.Offer.Items)
        {
            itemString.AppendLine(String.Format("| - {0}: {1}", entry.Key, entry.Value));
        }
        stringBuilder.AppendLine(String.Format("| {0} Items:\n{1}", args.Offer.Items.Count, itemString.ToString()));

        StringBuilder currenciesString = new StringBuilder();
        foreach (KeyValuePair<string, long> entry in args.Offer.Currencies)
        {
            currenciesString.AppendLine(String.Format("| - {0}: {1}", entry.Key, entry.Value));
        }
        stringBuilder.AppendLine(String.Format("| {0} Currencies: \n{1}", args.Offer.Currencies.Count, currenciesString.ToString()));

        Debug.Log(stringBuilder.ToString());
        UserWise.INSTANCE.OffersModule.InitializeOfferImpression(args.Offer);
    }

    public static void OnOfferUnavailable(object sender, OfferEventArgs args)
    {
        StringBuilder stringBuilder = new StringBuilder();
        stringBuilder.AppendLine("Offer Unavailable!");
        stringBuilder.AppendLine(String.Format("| ID: {0}", args.Offer.Id));
        stringBuilder.AppendLine(String.Format("| Title: {0}", args.Offer.Title));
        stringBuilder.AppendLine(String.Format("| Body: {0}", args.Offer.Body));
        stringBuilder.AppendLine(String.Format("| Portrait Image ID: {0}", args.Offer.PortraitImageId));
        stringBuilder.AppendLine(String.Format("| Landscape Image ID: {0}", args.Offer.LandscapeImageId));
        stringBuilder.AppendLine(String.Format("| Cost: {0}", args.Offer.Cost));
        stringBuilder.AppendLine(String.Format("| Android Product ID: {0}", args.Offer.AndroidProductId));
        stringBuilder.AppendLine(String.Format("| iOS Product ID: {0}", args.Offer.IOSProductId));

        StringBuilder itemString = new StringBuilder();
        foreach (KeyValuePair<string, long> entry in args.Offer.Items)
        {
            itemString.AppendLine(String.Format("| - {0}: {1}", entry.Key, entry.Value));
        }
        stringBuilder.AppendLine(String.Format("| {0} Items:\n{1}", args.Offer.Items.Count, itemString.ToString()));

        StringBuilder currenciesString = new StringBuilder();
        foreach (KeyValuePair<string, long> entry in args.Offer.Currencies)
        {
            currenciesString.AppendLine(String.Format("| - {0}: {1}", entry.Key, entry.Value));
        }
        stringBuilder.AppendLine(String.Format("| {0} Currencies: \n{1}", args.Offer.Currencies.Count, currenciesString.ToString()));

        Debug.Log(stringBuilder.ToString());
    }

    public static void OnOfferImpressionInitializationFailed(object sender, OfferEventArgs args)
    {
        Debug.Log(String.Format("Offer impression initialization failed. offer_id={0}", args.Offer.Id));
    }

    public static void OnOfferImpressionInitialized(object sender, OfferImpressionEventArgs args)
    {
        Offer offer = args.OfferImpression.Offer;

        Debug.Log(String.Format("Offer impression initialization succeded. offer_impression_id={0} offer_id={1}", args.OfferImpression.Id, offer.Id));
        // IDictSerializable allows you to serialize (or even deserialize, directly into the instance)
        // data in UserWise data objects.
        // Debug.Log(String.Format("Offer Data: {0}", (offer as IDictSerializable<Offer>).Serialize()));

        // All impressions start at the state "initialized". You can find all possible states
        // through the OfferImpression.ImpressionState enum. 
        //
        // You can Update the state of an impression through the use of:
        // UserWise.INSTANCE.OffersModule.UpdateOfferImpressionState(OfferImpression impression, OfferImpression.ImpressionState state);

        // Mark as "viewed" (previously, "initialized")
        UserWise.INSTANCE.OffersModule.UpdateOfferImpressionState(args.OfferImpression, OfferImpression.ImpressionState.viewed);
    }
}
